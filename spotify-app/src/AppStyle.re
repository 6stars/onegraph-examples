open Emotion;
open Emotion.Css.Color;

/*Common*/
let app = [%css [textAlign(`center)]];

let userIcon = [%css [width(`px(25))]];

let flexWrapper = (~justify) => [%css
  [display(`flex), justifyContent(justify)]
];

let flexWrapperRightAlign = [%css
  [display(`flex), alignItems(`center), justifyContent(`flexEnd)]
];

let pageTitle = [%css [fontSize(`px(48)), marginBottom(`px(64))]];

let pageSubTitle = [%css
  [fontSize(`px(24)), marginBottom(`px(32)), fontWeight(300)]
];

/*User Account*/
let userAccountWrapper = [%css
  [padding4(`px(16), `px(24), `px(0), `px(24))]
];

/*Link Sharing*/
let linkSharing = [%css [marginBottom(`px(64))]];

let shareLinkURL = [%css
  [
    border(`px(0), `none, `hex("ffffff")),
    borderBottom(`px(1), `solid, `hex("cfcfcf")),
    padding2(`px(0), `px(8)),
    width(`px(280)),
  ]
];

let subInfo = [%css
  [
    fontSize(`px(14)),
    color(`hex("a2a2a2")),
    padding2(`px(0), `px(8)),
    select(
      "#stop-btn",
      [
        color(`hex("ff4e4e")),
        margin2(`px(0), `px(16)),
        textDecoration(`underline),
        select(":hover", [cursor(`pointer), color(red)]),
      ],
    ),
  ]
];