open BsReactNative;

let component = ReasonReact.statelessComponent("BEInput");

let multiline = true;

let placeholder = "INPUT YOUR SENTENCES HERE!!";

let styles =
  StyleSheet.create(
    Style.(
      {
        "view":
          style([flex(5.), justifyContent(FlexEnd), width(Pct(100.))]),
        "input": style([margin(Pt(10.)), padding(Pt(10.))]),
      }
    ),
  );

let make = (~onChangeText, _children) => {
  ...component,
  render: _self =>
    <View style=styles##view>
      <TextInput style=styles##input multiline placeholder onChangeText />
    </View>,
};
