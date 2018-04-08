open BsReactNative;

open Belt;

let component = ReasonReact.statelessComponent("Result");

let styles =
  StyleSheet.create(
    Style.(
      {
        "view":
          style([
            padding(Pt(20.)),
            width(Pct(100.)),
            flex(1.),
            flexDirection(Row),
            flexWrap(Wrap),
          ]),
        "incorrectWord": style([margin(Pt(1.5)), color("#f66")]),
        "correctWord": style([margin(Pt(1.5))]),
      }
    ),
  );

let make = (~text, _children) => {
  ...component,
  render: _self => {
    let re = Js.Re.fromString("-");
    let toNormalizedWord = word =>
      word
      |> Js.String.toLowerCase
      |> Js.String.replaceByRe(
           Js.Re.fromStringWithFlags("[.!?;,]", ~flags="g"),
           "",
         );
    let isCombinationWords = Js.Re.test(_, re);
    let isCorrectWord = HashSet.String.has(Words.hashset, _);
    let isEveryCorrectWords = word =>
      word |> Js.String.splitByRe(re) |> Array.every(_, isCorrectWord);
    let toAnsweredElements = word =>
      word
      |> Js.String.splitByRe(Js.Re.fromString("\\s"))
      |> Array.mapWithIndex(
           _,
           (i, word) => {
             let normalized_word = word |> toNormalizedWord;
             let is_every_correct_words =
               normalized_word |> isCombinationWords ?
                 normalized_word |> isEveryCorrectWords :
                 normalized_word |> isCorrectWord;
             is_every_correct_words ?
               <Text
                 value=word
                 key=(Js.Int.toString(i))
                 style=styles##correctWord
               /> :
               <Text
                 value=word
                 key=(Js.Int.toString(i))
                 style=styles##incorrectWord
               />;
           },
         );
    <View style=styles##view>
      (text |> toAnsweredElements |> ReasonReact.arrayToElement)
    </View>;
  },
};
