// Generated by BUCKLESCRIPT VERSION 2.2.3, PLEASE EDIT WITH CARE
'use strict';

var Block = require("bs-platform/lib/js/block.js");
var Curry = require("bs-platform/lib/js/curry.js");
var Result = require("./Result.js");
var BEInput = require("./BEInput.js");
var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var TranslationButton = require("./TranslationButton.js");
var View$BsReactNative = require("bs-react-native/lib/js/src/components/view.js");
var Style$BsReactNative = require("bs-react-native/lib/js/src/style.js");

var component = ReasonReact.reducerComponent("BEValidator");

var style = Style$BsReactNative.style(/* :: */[
      Style$BsReactNative.flex(1),
      /* :: */[
        Style$BsReactNative.flexDirection(/* Column */2),
        /* :: */[
          Style$BsReactNative.justifyContent(/* Center */2),
          /* :: */[
            Style$BsReactNative.alignItems(/* Center */2),
            /* [] */0
          ]
        ]
      ]
    ]);

function make() {
  var newrecord = component.slice();
  newrecord[/* render */9] = (function (param) {
      var send = param[/* send */4];
      var state = param[/* state */2];
      return ReasonReact.element(/* None */0, /* None */0, View$BsReactNative.make(/* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* Some */[style], /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0, /* None */0)(/* array */[
                      ReasonReact.element(/* None */0, /* None */0, BEInput.make((function (text) {
                                  return Curry._1(send, /* OnChangeText */[text]);
                                }), /* array */[])),
                      ReasonReact.element(/* None */0, /* None */0, Result.make(state[/* text */0], /* array */[])),
                      ReasonReact.element(/* None */0, /* None */0, TranslationButton.make(state[/* text */0], /* array */[]))
                    ]));
    });
  newrecord[/* initialState */10] = (function () {
      return /* record */[/* text */""];
    });
  newrecord[/* reducer */12] = (function (action, _) {
      return /* Update */Block.__(0, [/* record */[/* text */action[0]]]);
    });
  return newrecord;
}

exports.component = component;
exports.style = style;
exports.make = make;
/* component Not a pure module */
