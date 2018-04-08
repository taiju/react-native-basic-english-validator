open BsReactNative;

type action =
  | Press;

let component = ReasonReact.statelessComponent("TranslationButton");

let url = "https://translate.google.com/#en/ja/";

let onPress = text =>
  Linking.openURL(url ++ Js.Global.encodeURIComponent(text)) |> ignore;

let title = {js|翻訳する|js};

let style = Style.(style([margin(Pt(10.)), flex(4.)]));

let make = (~text, _children) => {
  ...component,
  render: _self =>
    <View style> <Button title onPress=(_e => onPress(text)) /> </View>,
};
