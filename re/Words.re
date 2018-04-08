let hashset =
  [|
    "a",
    "able",
    "ably",
    "about",
    "account",
    "accounts",
    "acid",
    "acidly",
    "across",
    "act",
    "acts",
    "addition",
    "additions",
    "adjustment",
    "adjustments",
    "advertisement",
    "advertisements",
    "after",
    "again",
    "against",
    "agreement",
    "agreements",
    "air",
    "airs",
    "all",
    "almost",
    "am",
    "among",
    "amount",
    "amounts",
    "amusement",
    "amusements",
    "an",
    "and",
    "angle",
    "angles",
    "angrily",
    "angry",
    "animal",
    "animals",
    "answer",
    "answered",
    "answerer",
    "answering",
    "answers",
    "ant",
    "ants",
    "any",
    "apparatus",
    "apparatus",
    "apparatuses",
    "apple",
    "apples",
    "approval",
    "approvals",
    "arch",
    "arches",
    "are",
    "argument",
    "arguments",
    "arm",
    "armed",
    "armer",
    "armies",
    "arming",
    "arms",
    "army",
    "art",
    "arts",
    "as",
    "at",
    "attack",
    "attacks",
    "attempt",
    "attempted",
    "attempter",
    "attempting",
    "attempts",
    "attention",
    "attentions",
    "attraction",
    "attractions",
    "authorities",
    "authority",
    "automatic",
    "automaticly",
    "awake",
    "awakely",
    "away",
    "babies",
    "baby",
    "back",
    "backs",
    "bad",
    "badly",
    "bag",
    "bags",
    "balance",
    "balanced",
    "balancer",
    "balances",
    "balancing",
    "ball",
    "balls",
    "band",
    "banded",
    "bander",
    "banding",
    "bands",
    "base",
    "based",
    "baser",
    "bases",
    "basin",
    "basing",
    "basins",
    "basket",
    "baskets",
    "bath",
    "baths",
    "be",
    "beautiful",
    "beautifully",
    "because",
    "bed",
    "beded",
    "beder",
    "beding",
    "beds",
    "bee",
    "been",
    "bees",
    "before",
    "behaviour",
    "behaviours",
    "being",
    "belief",
    "beliefs",
    "bell",
    "bells",
    "bent",
    "bently",
    "berries",
    "berry",
    "best",
    "better",
    "between",
    "bird",
    "birds",
    "birth",
    "births",
    "bit",
    "bite",
    "bites",
    "bits",
    "bitter",
    "bitterly",
    "black",
    "blackly",
    "blade",
    "blades",
    "blood",
    "bloods",
    "blow",
    "blows",
    "blue",
    "bluly",
    "board",
    "boarded",
    "boarder",
    "boarding",
    "boards",
    "boat",
    "boats",
    "bodies",
    "body",
    "boies",
    "boiled",
    "boiler",
    "boiling",
    "boilingly",
    "bone",
    "boned",
    "boner",
    "bones",
    "boning",
    "book",
    "booked",
    "booker",
    "booking",
    "books",
    "boot",
    "boots",
    "bottle",
    "bottled",
    "bottler",
    "bottles",
    "bottling",
    "box",
    "boxed",
    "boxer",
    "boxes",
    "boxing",
    "boy",
    "brain",
    "brained",
    "brainer",
    "braining",
    "brains",
    "brake",
    "brakes",
    "branch",
    "branched",
    "brancher",
    "branches",
    "branching",
    "brass",
    "brasses",
    "bread",
    "breads",
    "breath",
    "breathed",
    "breather",
    "breathing",
    "breaths",
    "brick",
    "bricked",
    "bricker",
    "bricking",
    "bricks",
    "bridge",
    "bridged",
    "bridger",
    "bridges",
    "bridging",
    "bright",
    "brightly",
    "broken",
    "brokenly",
    "brother",
    "brothers",
    "brown",
    "brownly",
    "brush",
    "brushes",
    "bucket",
    "buckets",
    "builded",
    "builder",
    "building",
    "buildings",
    "bulb",
    "bulbs",
    "burn",
    "burns",
    "burst",
    "bursts",
    "business",
    "businesses",
    "but",
    "butter",
    "buttered",
    "butterer",
    "buttering",
    "butters",
    "button",
    "buttoned",
    "buttoner",
    "buttoning",
    "buttons",
    "by",
    "cake",
    "caked",
    "caker",
    "cakes",
    "caking",
    "came",
    "camera",
    "cameras",
    "canvas",
    "canvases",
    "card",
    "cards",
    "care",
    "cares",
    "carriage",
    "carriages",
    "cart",
    "carted",
    "carter",
    "carting",
    "carts",
    "cat",
    "cats",
    "cause",
    "caused",
    "causer",
    "causes",
    "causing",
    "certain",
    "certainly",
    "chain",
    "chained",
    "chainer",
    "chaining",
    "chains",
    "chalk",
    "chalked",
    "chalker",
    "chalking",
    "chalks",
    "chance",
    "chanced",
    "chancer",
    "chances",
    "chancing",
    "change",
    "changed",
    "changer",
    "changes",
    "changing",
    "cheap",
    "cheaply",
    "cheese",
    "cheeses",
    "chemical",
    "chemically",
    "chest",
    "chests",
    "chief",
    "chiefly",
    "chin",
    "chins",
    "church",
    "churches",
    "circle",
    "circled",
    "circler",
    "circles",
    "circling",
    "clean",
    "cleaned",
    "cleaner",
    "cleaning",
    "cleanly",
    "clear",
    "clearly",
    "clock",
    "clocks",
    "cloth",
    "clothed",
    "clother",
    "clothing",
    "cloths",
    "cloud",
    "clouded",
    "clouder",
    "clouding",
    "clouds",
    "coal",
    "coaled",
    "coaler",
    "coaling",
    "coals",
    "coat",
    "coated",
    "coater",
    "coating",
    "coats",
    "cold",
    "coldly",
    "collar",
    "collars",
    "colour",
    "coloured",
    "colourer",
    "colouring",
    "colours",
    "comb",
    "combed",
    "comber",
    "combing",
    "combs",
    "come",
    "comfort",
    "comforted",
    "comforter",
    "comforting",
    "comforts",
    "coming",
    "committee",
    "committees",
    "common",
    "commonly",
    "companies",
    "company",
    "comparison",
    "comparisons",
    "competition",
    "competitions",
    "complete",
    "completely",
    "complex",
    "complexly",
    "condition",
    "conditions",
    "connection",
    "connections",
    "conscious",
    "consciously",
    "control",
    "controled",
    "controler",
    "controling",
    "controls",
    "cook",
    "cooked",
    "cooker",
    "cooking",
    "cooks",
    "copies",
    "copper",
    "coppered",
    "copperer",
    "coppering",
    "coppers",
    "copy",
    "copyed",
    "copyer",
    "copying",
    "cord",
    "corded",
    "corder",
    "cording",
    "cords",
    "cork",
    "corked",
    "corker",
    "corking",
    "corks",
    "cotton",
    "cottons",
    "cough",
    "coughed",
    "cougher",
    "coughing",
    "coughs",
    "countries",
    "country",
    "cover",
    "covered",
    "coverer",
    "covering",
    "covers",
    "cow",
    "cows",
    "crack",
    "cracked",
    "cracker",
    "cracking",
    "cracks",
    "credit",
    "credited",
    "crediter",
    "crediting",
    "credits",
    "cries",
    "crime",
    "crimes",
    "cruel",
    "cruelly",
    "crush",
    "crushed",
    "crusher",
    "crushes",
    "crushing",
    "cry",
    "cryed",
    "cryer",
    "crying",
    "cup",
    "cups",
    "current",
    "currents",
    "curtain",
    "curtained",
    "curtainer",
    "curtaining",
    "curtains",
    "curve",
    "curved",
    "curver",
    "curves",
    "curving",
    "cushion",
    "cushioned",
    "cushioner",
    "cushioning",
    "cushions",
    "cut",
    "cuted",
    "cuter",
    "cuting",
    "cutly",
    "daies",
    "damage",
    "damages",
    "danger",
    "dangered",
    "dangerer",
    "dangering",
    "dangers",
    "dark",
    "darkly",
    "daughter",
    "daughters",
    "day",
    "dead",
    "deadly",
    "dear",
    "dearly",
    "death",
    "deaths",
    "debt",
    "debts",
    "decision",
    "decisions",
    "deep",
    "deeply",
    "degree",
    "degrees",
    "delicate",
    "delicately",
    "dependent",
    "dependently",
    "design",
    "designed",
    "designer",
    "designing",
    "designs",
    "desire",
    "desired",
    "desirer",
    "desires",
    "desiring",
    "destruction",
    "destructions",
    "detail",
    "detailed",
    "detailer",
    "detailing",
    "details",
    "development",
    "developments",
    "did",
    "different",
    "differently",
    "digestion",
    "digestions",
    "direction",
    "directions",
    "dirtily",
    "dirty",
    "discoveries",
    "discovery",
    "discussion",
    "discussions",
    "disease",
    "diseases",
    "disgust",
    "disgusted",
    "disguster",
    "disgusting",
    "disgusts",
    "distance",
    "distances",
    "distribution",
    "distributions",
    "division",
    "divisions",
    "do",
    "does",
    "dog",
    "dogs",
    "doing",
    "done",
    "door",
    "doors",
    "doubt",
    "doubted",
    "doubter",
    "doubting",
    "doubts",
    "down",
    "drain",
    "drained",
    "drainer",
    "draining",
    "drains",
    "drawer",
    "drawers",
    "dress",
    "dressed",
    "dresser",
    "dresses",
    "dressing",
    "drily",
    "drink",
    "drinks",
    "drived",
    "driver",
    "driving",
    "drivings",
    "drop",
    "droped",
    "droper",
    "droping",
    "drops",
    "dry",
    "dryed",
    "dryer",
    "drying",
    "dust",
    "dusted",
    "duster",
    "dusting",
    "dusts",
    "ear",
    "earlily",
    "early",
    "ears",
    "earth",
    "earths",
    "east",
    "edge",
    "edged",
    "edger",
    "edges",
    "edging",
    "education",
    "educations",
    "effect",
    "effected",
    "effecter",
    "effecting",
    "effects",
    "egg",
    "eggs",
    "elastic",
    "elasticly",
    "electric",
    "electricly",
    "end",
    "ended",
    "ender",
    "ending",
    "ends",
    "engine",
    "engines",
    "enough",
    "equal",
    "equally",
    "error",
    "errors",
    "even",
    "event",
    "events",
    "ever",
    "every",
    "example",
    "examples",
    "exchange",
    "exchanged",
    "exchanger",
    "exchanges",
    "exchanging",
    "existence",
    "existences",
    "expansion",
    "expansions",
    "experience",
    "experienced",
    "experiencer",
    "experiences",
    "experiencing",
    "expert",
    "experts",
    "eye",
    "eyed",
    "eyer",
    "eyes",
    "eying",
    "face",
    "faced",
    "facer",
    "faces",
    "facing",
    "fact",
    "facts",
    "fall",
    "falls",
    "false",
    "falsely",
    "families",
    "family",
    "far",
    "farm",
    "farmed",
    "farmer",
    "farming",
    "farms",
    "farther",
    "farthest",
    "fat",
    "father",
    "fathers",
    "fatly",
    "fear",
    "feared",
    "fearer",
    "fearing",
    "fears",
    "feather",
    "feathered",
    "featherer",
    "feathering",
    "feathers",
    "feeble",
    "feebly",
    "feeled",
    "feeler",
    "feeling",
    "feelings",
    "female",
    "femaly",
    "fertile",
    "fertily",
    "fiction",
    "fictions",
    "field",
    "fields",
    "fight",
    "fights",
    "finger",
    "fingered",
    "fingerer",
    "fingering",
    "fingers",
    "fire",
    "fired",
    "firer",
    "fires",
    "firing",
    "first",
    "firstly",
    "fish",
    "fished",
    "fisher",
    "fishes",
    "fishing",
    "fixed",
    "fixedly",
    "flag",
    "flags",
    "flame",
    "flames",
    "flat",
    "flatly",
    "flies",
    "flight",
    "flights",
    "floor",
    "floored",
    "floorer",
    "flooring",
    "floors",
    "flower",
    "flowered",
    "flowerer",
    "flowering",
    "flowers",
    "fly",
    "fold",
    "folded",
    "folder",
    "folding",
    "folds",
    "food",
    "foods",
    "foolish",
    "foolishly",
    "foot",
    "foots",
    "for",
    "force",
    "forced",
    "forcer",
    "forces",
    "forcing",
    "fork",
    "forked",
    "forker",
    "forking",
    "forks",
    "form",
    "formed",
    "former",
    "forming",
    "forms",
    "forward",
    "fowl",
    "fowls",
    "frame",
    "framed",
    "framer",
    "frames",
    "framing",
    "free",
    "freely",
    "frequent",
    "frequently",
    "friend",
    "friends",
    "from",
    "front",
    "fronted",
    "fronter",
    "fronting",
    "fronts",
    "fruit",
    "fruits",
    "full",
    "fully",
    "further",
    "furthest",
    "future",
    "futurely",
    "garden",
    "gardened",
    "gardener",
    "gardening",
    "gardens",
    "gat",
    "gave",
    "general",
    "generally",
    "get",
    "getting",
    "girl",
    "girls",
    "give",
    "given",
    "giving",
    "glass",
    "glasses",
    "glove",
    "gloved",
    "glover",
    "gloves",
    "gloving",
    "go",
    "goat",
    "goats",
    "goes",
    "going",
    "gold",
    "golds",
    "gone",
    "good",
    "goodly",
    "got",
    "gotten",
    "government",
    "governments",
    "grain",
    "grains",
    "grass",
    "grasses",
    "great",
    "greatly",
    "green",
    "greenly",
    "greily",
    "grey",
    "grip",
    "griped",
    "griper",
    "griping",
    "grips",
    "group",
    "grouped",
    "grouper",
    "grouping",
    "groups",
    "growth",
    "growths",
    "guide",
    "guided",
    "guider",
    "guides",
    "guiding",
    "gun",
    "guns",
    "had",
    "hair",
    "hairs",
    "hammer",
    "hammered",
    "hammerer",
    "hammering",
    "hammers",
    "hand",
    "handed",
    "hander",
    "handing",
    "hands",
    "hanged",
    "hanger",
    "hanging",
    "hangingly",
    "happily",
    "happy",
    "harbour",
    "harboured",
    "harbourer",
    "harbouring",
    "harbours",
    "hard",
    "hardly",
    "harmonies",
    "harmony",
    "has",
    "hat",
    "hate",
    "hated",
    "hated",
    "hater",
    "hater",
    "hates",
    "hath",
    "hating",
    "hating",
    "hats",
    "have",
    "have",
    "having",
    "he",
    "head",
    "headed",
    "header",
    "heading",
    "heads",
    "healthily",
    "healthy",
    "heared",
    "hearer",
    "hearing",
    "hearings",
    "heart",
    "hearts",
    "heat",
    "heated",
    "heater",
    "heating",
    "heats",
    "help",
    "helped",
    "helper",
    "helping",
    "helps",
    "her",
    "here",
    "hers",
    "high",
    "highly",
    "him",
    "his",
    "histories",
    "history",
    "hole",
    "holes",
    "hollow",
    "hollowly",
    "hook",
    "hooked",
    "hooker",
    "hooking",
    "hooks",
    "hope",
    "hoped",
    "hoper",
    "hopes",
    "hoping",
    "horn",
    "horns",
    "horse",
    "horses",
    "hospital",
    "hospitals",
    "hour",
    "hours",
    "house",
    "housed",
    "houser",
    "houses",
    "housing",
    "how",
    "humour",
    "humoured",
    "humourer",
    "humouring",
    "humours",
    "i",
    "ice",
    "iced",
    "icer",
    "ices",
    "icing",
    "idea",
    "ideas",
    "if",
    "ill",
    "illy",
    "important",
    "importantly",
    "impulse",
    "impulses",
    "in",
    "increase",
    "increased",
    "increaser",
    "increases",
    "increasing",
    "industries",
    "industry",
    "ink",
    "inked",
    "inker",
    "inking",
    "inks",
    "inner",
    "insect",
    "insects",
    "instrument",
    "instruments",
    "insurance",
    "insurances",
    "interest",
    "interested",
    "interester",
    "interesting",
    "interests",
    "invention",
    "inventions",
    "iron",
    "ironed",
    "ironer",
    "ironing",
    "irons",
    "is",
    "island",
    "islands",
    "it",
    "its",
    "itself",
    "jellies",
    "jelly",
    "jewel",
    "jeweled",
    "jeweler",
    "jeweling",
    "jewels",
    "join",
    "joined",
    "joiner",
    "joining",
    "joins",
    "journeies",
    "journey",
    "journeyed",
    "journeyer",
    "journeying",
    "judge",
    "judges",
    "jump",
    "jumped",
    "jumper",
    "jumping",
    "jumps",
    "keep",
    "keeping",
    "keies",
    "kept",
    "kettle",
    "kettles",
    "key",
    "keyed",
    "keyer",
    "keying",
    "kick",
    "kicked",
    "kicker",
    "kicking",
    "kicks",
    "kind",
    "kindly",
    "kiss",
    "kissed",
    "kisser",
    "kisses",
    "kissing",
    "knee",
    "knees",
    "knife",
    "knifed",
    "knifer",
    "knifes",
    "knifing",
    "knot",
    "knoted",
    "knoter",
    "knoting",
    "knots",
    "knowledge",
    "knowledges",
    "land",
    "landed",
    "lander",
    "landing",
    "lands",
    "language",
    "languages",
    "last",
    "lastly",
    "late",
    "lately",
    "laugh",
    "laughed",
    "laugher",
    "laughing",
    "laughs",
    "law",
    "laws",
    "lead",
    "leaded",
    "leader",
    "leading",
    "leads",
    "leaf",
    "leafs",
    "learned",
    "learner",
    "learning",
    "learnings",
    "least",
    "leather",
    "leathers",
    "left",
    "leftly",
    "leg",
    "legs",
    "less",
    "let",
    "letter",
    "lettered",
    "letterer",
    "lettering",
    "letters",
    "level",
    "leveled",
    "leveler",
    "leveling",
    "levels",
    "libraries",
    "library",
    "lift",
    "lifted",
    "lifter",
    "lifting",
    "lifts",
    "light",
    "lighted",
    "lighter",
    "lighting",
    "lights",
    "like",
    "likely",
    "limit",
    "limited",
    "limiter",
    "limiting",
    "limits",
    "line",
    "lined",
    "linen",
    "linens",
    "liner",
    "lines",
    "lining",
    "lip",
    "lips",
    "liquid",
    "liquids",
    "list",
    "listed",
    "lister",
    "listing",
    "lists",
    "little",
    "littled",
    "littler",
    "littling",
    "lived",
    "liver",
    "living",
    "livingly",
    "lock",
    "locked",
    "locker",
    "locking",
    "locks",
    "long",
    "longly",
    "look",
    "looked",
    "looker",
    "looking",
    "looks",
    "loose",
    "loosely",
    "loss",
    "losses",
    "loud",
    "loudly",
    "love",
    "loved",
    "lover",
    "loves",
    "loving",
    "low",
    "lowly",
    "machine",
    "machined",
    "machiner",
    "machines",
    "machining",
    "made",
    "make",
    "making",
    "male",
    "maly",
    "man",
    "manager",
    "managers",
    "maned",
    "maner",
    "maning",
    "mans",
    "map",
    "maped",
    "maper",
    "maping",
    "maps",
    "mark",
    "marked",
    "marker",
    "market",
    "marketed",
    "marketer",
    "marketing",
    "markets",
    "marking",
    "marks",
    "married",
    "marriedly",
    "mass",
    "massed",
    "masser",
    "masses",
    "massing",
    "match",
    "matches",
    "material",
    "materially",
    "may",
    "me",
    "meal",
    "meals",
    "measure",
    "measured",
    "measurer",
    "measures",
    "measuring",
    "meat",
    "meats",
    "medical",
    "medically",
    "meeting",
    "meetings",
    "memories",
    "memory",
    "metal",
    "metals",
    "middle",
    "middles",
    "might",
    "militarily",
    "military",
    "milk",
    "milked",
    "milker",
    "milking",
    "milks",
    "mind",
    "minds",
    "mine",
    "mine",
    "mined",
    "miner",
    "mines",
    "mining",
    "minute",
    "minutes",
    "mist",
    "mists",
    "mixed",
    "mixedly",
    "moneies",
    "money",
    "monkeies",
    "monkey",
    "month",
    "months",
    "moon",
    "moons",
    "more",
    "morning",
    "mornings",
    "most",
    "mother",
    "mothers",
    "motion",
    "motioned",
    "motioner",
    "motioning",
    "motions",
    "mountain",
    "mountains",
    "mouth",
    "mouthed",
    "mouther",
    "mouthing",
    "mouths",
    "move",
    "moved",
    "mover",
    "moves",
    "moving",
    "much",
    "muscle",
    "muscles",
    "music",
    "musics",
    "my",
    "nail",
    "nailed",
    "nailer",
    "nailing",
    "nails",
    "name",
    "named",
    "namer",
    "names",
    "naming",
    "narrow",
    "narrowly",
    "nation",
    "nations",
    "natural",
    "naturally",
    "near",
    "nearer",
    "nearest",
    "necessarily",
    "necessary",
    "neck",
    "necks",
    "need",
    "needed",
    "needer",
    "needing",
    "needle",
    "needles",
    "needs",
    "nerve",
    "nerved",
    "nerver",
    "nerves",
    "nerving",
    "net",
    "nets",
    "never",
    "new",
    "newly",
    "news",
    "newses",
    "night",
    "nights",
    "no",
    "noise",
    "noises",
    "normal",
    "normally",
    "north",
    "nose",
    "noses",
    "not",
    "note",
    "noted",
    "noter",
    "notes",
    "noting",
    "now",
    "number",
    "numbered",
    "numberer",
    "numbering",
    "numbers",
    "nut",
    "nuts",
    "observation",
    "observations",
    "of",
    "off",
    "offer",
    "offered",
    "offerer",
    "offering",
    "offers",
    "office",
    "offices",
    "oil",
    "oiled",
    "oiler",
    "oiling",
    "oils",
    "old",
    "oldly",
    "on",
    "one",
    "only",
    "open",
    "opened",
    "opener",
    "opening",
    "openly",
    "operation",
    "operations",
    "opinion",
    "opinions",
    "opposite",
    "oppositely",
    "or",
    "orange",
    "oranges",
    "order",
    "ordered",
    "orderer",
    "ordering",
    "orders",
    "organization",
    "organizations",
    "ornament",
    "ornamented",
    "ornamenter",
    "ornamenting",
    "ornaments",
    "other",
    "our",
    "ours",
    "out",
    "outer",
    "oven",
    "ovens",
    "over",
    "owner",
    "owners",
    "page",
    "paged",
    "pager",
    "pages",
    "paging",
    "pain",
    "pained",
    "painer",
    "paining",
    "pains",
    "paint",
    "painted",
    "painter",
    "painting",
    "paints",
    "paper",
    "papered",
    "paperer",
    "papering",
    "papers",
    "parallel",
    "parallelly",
    "parcel",
    "parcels",
    "part",
    "parted",
    "parter",
    "parting",
    "parts",
    "past",
    "paste",
    "pasted",
    "paster",
    "pastes",
    "pasting",
    "pastly",
    "payment",
    "payments",
    "peace",
    "peaces",
    "pen",
    "pencil",
    "penciled",
    "penciler",
    "penciling",
    "pencils",
    "pened",
    "pener",
    "pening",
    "pens",
    "person",
    "persons",
    "physical",
    "physically",
    "picture",
    "pictured",
    "picturer",
    "pictures",
    "picturing",
    "pig",
    "pigs",
    "pin",
    "pined",
    "piner",
    "pining",
    "pins",
    "pipe",
    "piped",
    "piper",
    "pipes",
    "piping",
    "place",
    "placed",
    "placer",
    "places",
    "placing",
    "plaies",
    "plane",
    "planed",
    "planer",
    "planes",
    "planing",
    "plant",
    "planted",
    "planter",
    "planting",
    "plants",
    "plate",
    "plated",
    "plater",
    "plates",
    "plating",
    "play",
    "played",
    "player",
    "playing",
    "please",
    "pleased",
    "pleaser",
    "pleasing",
    "pleasure",
    "pleasures",
    "plough",
    "ploughed",
    "plougher",
    "ploughing",
    "ploughs",
    "pocket",
    "pocketed",
    "pocketer",
    "pocketing",
    "pockets",
    "point",
    "pointed",
    "pointer",
    "pointing",
    "points",
    "poison",
    "poisoned",
    "poisoner",
    "poisoning",
    "poisons",
    "polish",
    "polished",
    "polisher",
    "polishes",
    "polishing",
    "political",
    "politically",
    "poor",
    "poorly",
    "porter",
    "porters",
    "position",
    "positions",
    "possible",
    "possibly",
    "pot",
    "potato",
    "potatos",
    "poted",
    "poter",
    "poting",
    "pots",
    "powder",
    "powdered",
    "powderer",
    "powdering",
    "powders",
    "power",
    "powers",
    "present",
    "presently",
    "price",
    "priced",
    "pricer",
    "prices",
    "pricing",
    "print",
    "printed",
    "printer",
    "printing",
    "prints",
    "prison",
    "prisoned",
    "prisoner",
    "prisoning",
    "prisons",
    "private",
    "privately",
    "probable",
    "probably",
    "process",
    "processed",
    "processer",
    "processes",
    "processing",
    "produce",
    "produced",
    "producer",
    "produces",
    "producing",
    "profit",
    "profited",
    "profiter",
    "profiting",
    "profits",
    "properties",
    "property",
    "prose",
    "proses",
    "protest",
    "protested",
    "protester",
    "protesting",
    "protests",
    "public",
    "publicly",
    "pull",
    "pulled",
    "puller",
    "pulling",
    "pulls",
    "pump",
    "pumped",
    "pumper",
    "pumping",
    "pumps",
    "punishment",
    "punishments",
    "purpose",
    "purposed",
    "purposer",
    "purposes",
    "purposing",
    "push",
    "pushed",
    "pusher",
    "pushes",
    "pushing",
    "put",
    "qualities",
    "quality",
    "question",
    "questioned",
    "questioner",
    "questioning",
    "questions",
    "quick",
    "quickly",
    "quiet",
    "quietly",
    "quite",
    "raies",
    "rail",
    "railed",
    "railer",
    "railing",
    "rails",
    "rain",
    "rained",
    "rainer",
    "raining",
    "rains",
    "range",
    "ranged",
    "ranger",
    "ranges",
    "ranging",
    "rat",
    "rate",
    "rated",
    "rater",
    "rates",
    "rating",
    "rats",
    "ray",
    "rayed",
    "rayer",
    "raying",
    "reaction",
    "reactions",
    "readed",
    "reader",
    "readily",
    "reading",
    "readings",
    "ready",
    "reason",
    "reasoned",
    "reasoner",
    "reasoning",
    "reasons",
    "receipt",
    "receipted",
    "receipter",
    "receipting",
    "receipts",
    "record",
    "recorded",
    "recorder",
    "recording",
    "records",
    "red",
    "redly",
    "regret",
    "regreted",
    "regreter",
    "regreting",
    "regrets",
    "regular",
    "regularly",
    "relation",
    "relations",
    "religion",
    "religions",
    "representative",
    "representatives",
    "request",
    "requested",
    "requester",
    "requesting",
    "requests",
    "respect",
    "respected",
    "respecter",
    "respecting",
    "respects",
    "responsible",
    "responsibly",
    "rest",
    "rested",
    "rester",
    "resting",
    "rests",
    "reward",
    "rewarded",
    "rewarder",
    "rewarding",
    "rewards",
    "rhythm",
    "rhythms",
    "rice",
    "rices",
    "right",
    "rightly",
    "ring",
    "ringed",
    "ringer",
    "ringing",
    "rings",
    "river",
    "rivers",
    "road",
    "roads",
    "rod",
    "rods",
    "roll",
    "rolled",
    "roller",
    "rolling",
    "rolls",
    "roof",
    "roofed",
    "roofer",
    "roofing",
    "roofs",
    "room",
    "roomed",
    "roomer",
    "rooming",
    "rooms",
    "root",
    "rooted",
    "rooter",
    "rooting",
    "roots",
    "rough",
    "roughly",
    "round",
    "roundly",
    "rub",
    "rubs",
    "rule",
    "ruled",
    "ruler",
    "rules",
    "ruling",
    "run",
    "runs",
    "sad",
    "sadly",
    "safe",
    "safely",
    "said",
    "sail",
    "sailed",
    "sailer",
    "sailing",
    "sails",
    "salt",
    "salted",
    "salter",
    "salting",
    "salts",
    "same",
    "samely",
    "sand",
    "sands",
    "saw",
    "say",
    "saying",
    "scale",
    "scaled",
    "scaler",
    "scales",
    "scaling",
    "school",
    "schooled",
    "schooler",
    "schooling",
    "schools",
    "science",
    "sciences",
    "scissors",
    "scissorses",
    "screw",
    "screwed",
    "screwer",
    "screwing",
    "screws",
    "sea",
    "seas",
    "seat",
    "seated",
    "seater",
    "seating",
    "seats",
    "second",
    "secondly",
    "secret",
    "secretaries",
    "secretary",
    "secretly",
    "see",
    "seed",
    "seeded",
    "seeder",
    "seeding",
    "seeds",
    "seeing",
    "seem",
    "seen",
    "selection",
    "selections",
    "self",
    "selfs",
    "send",
    "sending",
    "sense",
    "sensed",
    "senser",
    "senses",
    "sensing",
    "sent",
    "separate",
    "separated",
    "separately",
    "separater",
    "separating",
    "serious",
    "seriously",
    "servant",
    "servants",
    "sex",
    "sexes",
    "shade",
    "shaded",
    "shader",
    "shades",
    "shading",
    "shake",
    "shakes",
    "shame",
    "shames",
    "sharp",
    "sharply",
    "she",
    "sheep",
    "sheeps",
    "shelf",
    "shelfs",
    "ship",
    "shiped",
    "shiper",
    "shiping",
    "ships",
    "shirt",
    "shirts",
    "shock",
    "shocked",
    "shocker",
    "shocking",
    "shocks",
    "shoe",
    "shoes",
    "short",
    "shortly",
    "shut",
    "shuted",
    "shuter",
    "shuting",
    "shutly",
    "side",
    "sided",
    "sider",
    "sides",
    "siding",
    "sign",
    "signed",
    "signer",
    "signing",
    "signs",
    "silk",
    "silks",
    "silver",
    "silvered",
    "silverer",
    "silvering",
    "silvers",
    "simple",
    "simply",
    "sister",
    "sisters",
    "size",
    "sizes",
    "skies",
    "skin",
    "skined",
    "skiner",
    "skining",
    "skins",
    "skirt",
    "skirted",
    "skirter",
    "skirting",
    "skirts",
    "sky",
    "sleep",
    "sleeps",
    "slip",
    "sliped",
    "sliper",
    "sliping",
    "slips",
    "slope",
    "sloped",
    "sloper",
    "slopes",
    "sloping",
    "slow",
    "slowly",
    "small",
    "smally",
    "smash",
    "smashed",
    "smasher",
    "smashes",
    "smashing",
    "smell",
    "smells",
    "smile",
    "smiled",
    "smiler",
    "smiles",
    "smiling",
    "smoke",
    "smoked",
    "smoker",
    "smokes",
    "smoking",
    "smooth",
    "smoothly",
    "snake",
    "snakes",
    "sneeze",
    "sneezed",
    "sneezer",
    "sneezes",
    "sneezing",
    "snow",
    "snowed",
    "snower",
    "snowing",
    "snows",
    "so",
    "soap",
    "soaped",
    "soaper",
    "soaping",
    "soaps",
    "societies",
    "society",
    "sock",
    "socks",
    "soft",
    "softly",
    "solid",
    "solidly",
    "some",
    "son",
    "song",
    "songs",
    "sons",
    "sort",
    "sorted",
    "sorter",
    "sorting",
    "sorts",
    "sound",
    "sounded",
    "sounder",
    "sounding",
    "sounds",
    "soup",
    "soups",
    "south",
    "space",
    "spaced",
    "spacer",
    "spaces",
    "spacing",
    "spade",
    "spades",
    "special",
    "specially",
    "sponge",
    "sponged",
    "sponger",
    "sponges",
    "sponging",
    "spoon",
    "spoons",
    "spring",
    "springs",
    "square",
    "squared",
    "squarer",
    "squares",
    "squaring",
    "stage",
    "staged",
    "stager",
    "stages",
    "staging",
    "stamp",
    "stamped",
    "stamper",
    "stamping",
    "stamps",
    "star",
    "stared",
    "starer",
    "staring",
    "stars",
    "start",
    "started",
    "starter",
    "starting",
    "starts",
    "statement",
    "statements",
    "station",
    "stationed",
    "stationer",
    "stationing",
    "stations",
    "steam",
    "steamed",
    "steamer",
    "steaming",
    "steams",
    "steel",
    "steeled",
    "steeler",
    "steeling",
    "steels",
    "stem",
    "stems",
    "step",
    "steped",
    "steper",
    "steping",
    "steps",
    "stick",
    "stickily",
    "sticks",
    "sticky",
    "stiff",
    "stiffly",
    "still",
    "stitch",
    "stitched",
    "stitcher",
    "stitches",
    "stitching",
    "stocking",
    "stockings",
    "stomach",
    "stomaches",
    "stone",
    "stoned",
    "stoner",
    "stones",
    "stoning",
    "stop",
    "stoped",
    "stoper",
    "stoping",
    "stops",
    "store",
    "stored",
    "storer",
    "stores",
    "stories",
    "storing",
    "story",
    "straight",
    "straightly",
    "strange",
    "strangely",
    "street",
    "streets",
    "stretch",
    "stretched",
    "stretcher",
    "stretches",
    "stretching",
    "strong",
    "strongly",
    "structure",
    "structures",
    "substance",
    "substances",
    "such",
    "sudden",
    "suddenly",
    "sugar",
    "sugared",
    "sugarer",
    "sugaring",
    "sugars",
    "suggestion",
    "suggestions",
    "summer",
    "summers",
    "sun",
    "suned",
    "suner",
    "suning",
    "suns",
    "support",
    "supported",
    "supporter",
    "supporting",
    "supports",
    "surprise",
    "surprised",
    "surpriser",
    "surprises",
    "surprising",
    "sweet",
    "sweetly",
    "swim",
    "swims",
    "system",
    "systems",
    "table",
    "tables",
    "tail",
    "tails",
    "take",
    "taken",
    "taking",
    "talk",
    "talked",
    "talker",
    "talking",
    "talks",
    "tall",
    "tally",
    "taste",
    "tasted",
    "taster",
    "tastes",
    "tasting",
    "tax",
    "taxed",
    "taxer",
    "taxes",
    "taxing",
    "teached",
    "teacher",
    "teaching",
    "teachings",
    "tendencies",
    "tendency",
    "test",
    "tested",
    "tester",
    "testing",
    "tests",
    "than",
    "that",
    "the",
    "their",
    "them",
    "then",
    "theories",
    "theory",
    "there",
    "these",
    "they",
    "thick",
    "thickly",
    "thin",
    "thing",
    "things",
    "thinly",
    "this",
    "those",
    "though",
    "thought",
    "thoughts",
    "thread",
    "threaded",
    "threader",
    "threading",
    "threads",
    "throat",
    "throats",
    "through",
    "thumb",
    "thumbed",
    "thumber",
    "thumbing",
    "thumbs",
    "thunder",
    "thundered",
    "thunderer",
    "thundering",
    "thunders",
    "ticket",
    "ticketed",
    "ticketer",
    "ticketing",
    "tickets",
    "tight",
    "tightly",
    "till",
    "time",
    "timed",
    "timer",
    "times",
    "timing",
    "tin",
    "tined",
    "tiner",
    "tining",
    "tins",
    "tired",
    "tiredly",
    "to",
    "toe",
    "toes",
    "together",
    "tomorrow",
    "tongue",
    "tongues",
    "took",
    "tooth",
    "tooths",
    "top",
    "toped",
    "toper",
    "toping",
    "tops",
    "touch",
    "touched",
    "toucher",
    "touches",
    "touching",
    "town",
    "towns",
    "trade",
    "traded",
    "trader",
    "trades",
    "trading",
    "traies",
    "train",
    "trained",
    "trainer",
    "training",
    "trains",
    "transport",
    "transported",
    "transporter",
    "transporting",
    "transports",
    "tray",
    "tree",
    "trees",
    "trick",
    "tricked",
    "tricker",
    "tricking",
    "tricks",
    "trouble",
    "troubled",
    "troubler",
    "troubles",
    "troubling",
    "trousers",
    "trouserses",
    "true",
    "truly",
    "turn",
    "turned",
    "turner",
    "turning",
    "turns",
    "twist",
    "twisted",
    "twister",
    "twisting",
    "twists",
    "umbrella",
    "umbrellas",
    "unable",
    "unacid",
    "unangry",
    "unautomatic",
    "unawake",
    "unbad",
    "unbeautiful",
    "unbent",
    "unbitter",
    "unblack",
    "unblue",
    "unboiling",
    "unbright",
    "unbroken",
    "unbrown",
    "uncertain",
    "uncheap",
    "unchemical",
    "unchief",
    "unclean",
    "unclear",
    "uncold",
    "uncommon",
    "uncomplete",
    "uncomplex",
    "unconscious",
    "uncruel",
    "uncut",
    "undark",
    "undead",
    "undear",
    "undeep",
    "undelicate",
    "undependent",
    "under",
    "undifferent",
    "undirty",
    "undry",
    "unearly",
    "unelastic",
    "unelectric",
    "unequal",
    "unfalse",
    "unfat",
    "unfeeble",
    "unfemale",
    "unfertile",
    "unfirst",
    "unfixed",
    "unflat",
    "unfoolish",
    "unfree",
    "unfrequent",
    "unfull",
    "unfuture",
    "ungeneral",
    "ungood",
    "ungreat",
    "ungreen",
    "ungrey",
    "unhanging",
    "unhappy",
    "unhard",
    "unhealthy",
    "unhigh",
    "unhollow",
    "unill",
    "unimportant",
    "unit",
    "united",
    "uniter",
    "uniting",
    "units",
    "unkind",
    "unlast",
    "unlate",
    "unleft",
    "unlike",
    "unliving",
    "unlong",
    "unloose",
    "unloud",
    "unlow",
    "unmale",
    "unmarried",
    "unmaterial",
    "unmedical",
    "unmilitary",
    "unmixed",
    "unnarrow",
    "unnatural",
    "unnecessary",
    "unnew",
    "unnormal",
    "unold",
    "unopen",
    "unopposite",
    "unparallel",
    "unpast",
    "unphysical",
    "unpolitical",
    "unpoor",
    "unpossible",
    "unpresent",
    "unprivate",
    "unprobable",
    "unpublic",
    "unquick",
    "unquiet",
    "unready",
    "unred",
    "unregular",
    "unresponsible",
    "unright",
    "unrough",
    "unround",
    "unsad",
    "unsafe",
    "unsame",
    "unsecond",
    "unsecret",
    "unseparate",
    "unserious",
    "unsharp",
    "unshort",
    "unshut",
    "unsimple",
    "unslow",
    "unsmall",
    "unsmooth",
    "unsoft",
    "unsolid",
    "unspecial",
    "unsticky",
    "unstiff",
    "unstraight",
    "unstrange",
    "unstrong",
    "unsudden",
    "unsweet",
    "untall",
    "unthick",
    "unthin",
    "untight",
    "untired",
    "untrue",
    "unviolent",
    "unwaiting",
    "unwarm",
    "unwet",
    "unwhite",
    "unwide",
    "unwise",
    "unwrong",
    "unyellow",
    "unyoung",
    "up",
    "us",
    "use",
    "used",
    "user",
    "uses",
    "using",
    "value",
    "valued",
    "valuer",
    "values",
    "valuing",
    "verse",
    "verses",
    "very",
    "vessel",
    "vessels",
    "view",
    "viewed",
    "viewer",
    "viewing",
    "views",
    "violent",
    "violently",
    "voice",
    "voiced",
    "voicer",
    "voices",
    "voicing",
    "waies",
    "waited",
    "waiter",
    "waiting",
    "waitingly",
    "walk",
    "walked",
    "walker",
    "walking",
    "walks",
    "wall",
    "walled",
    "waller",
    "walling",
    "walls",
    "war",
    "warm",
    "warmly",
    "wars",
    "was",
    "wash",
    "washed",
    "washer",
    "washes",
    "washing",
    "waste",
    "wasted",
    "waster",
    "wastes",
    "wasting",
    "watch",
    "watched",
    "watcher",
    "watches",
    "watching",
    "water",
    "watered",
    "waterer",
    "watering",
    "waters",
    "wave",
    "waved",
    "waver",
    "waves",
    "waving",
    "wax",
    "waxed",
    "waxer",
    "waxes",
    "waxing",
    "way",
    "we",
    "weather",
    "weathered",
    "weatherer",
    "weathering",
    "weathers",
    "week",
    "weeks",
    "weight",
    "weighted",
    "weighter",
    "weighting",
    "weights",
    "well",
    "went",
    "were",
    "west",
    "wet",
    "wetly",
    "what",
    "wheel",
    "wheeled",
    "wheeler",
    "wheeling",
    "wheels",
    "when",
    "where",
    "which",
    "while",
    "whip",
    "whiped",
    "whiper",
    "whiping",
    "whips",
    "whistle",
    "whistled",
    "whistler",
    "whistles",
    "whistling",
    "white",
    "whitely",
    "who",
    "whom",
    "whose",
    "why",
    "wide",
    "widely",
    "will",
    "wind",
    "window",
    "windows",
    "winds",
    "wine",
    "wines",
    "wing",
    "wings",
    "winter",
    "winters",
    "wire",
    "wired",
    "wirer",
    "wires",
    "wiring",
    "wise",
    "wisely",
    "with",
    "woman",
    "womans",
    "wood",
    "woods",
    "wool",
    "wools",
    "word",
    "worded",
    "worder",
    "wording",
    "words",
    "work",
    "worked",
    "worker",
    "working",
    "works",
    "worm",
    "wormed",
    "wormer",
    "worming",
    "worms",
    "worse",
    "worst",
    "would",
    "wound",
    "wounded",
    "wounder",
    "wounding",
    "wounds",
    "writed",
    "writer",
    "writing",
    "writings",
    "wrong",
    "wrongly",
    "year",
    "years",
    "yellow",
    "yellowly",
    "yes",
    "yesterday",
    "you",
    "young",
    "youngly",
    "your",
    "yours",
  |]
  |> Belt.HashSet.String.fromArray;