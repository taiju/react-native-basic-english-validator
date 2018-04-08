open BsReactNative;

type action =
  | OnChangeText(string);

type state = {text: string};

let component = ReasonReact.reducerComponent("BEValidator");

let style =
  Style.(
    style([
      flex(1.),
      flexDirection(Column),
      justifyContent(Center),
      alignItems(Center),
    ])
  );

let make = _children => {
  ...component,
  initialState: () => {text: ""},
  reducer: (action, _state) =>
    switch (action) {
    | OnChangeText(text) => ReasonReact.Update({text: text})
    },
  render: ({state, send}) =>
    <View style>
      <BEInput onChangeText=(text => send(OnChangeText(text))) />
      <Result text=state.text />
      <TranslationButton text=state.text />
    </View>,
};
