// -*- C++ -*-
#ifndef _Tokens_h_
#define _Tokens_h_

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/seq/for_each.hpp>

#define TOKEN_SEQ_1                             \
    (Abs)                                       \
    (AccountingLabel)                           \
    (Activation)                                \
    (AddedBefore)                               \
    (AddedSince)                                \
    (AddSpecial)                                \
    (AddStarlanes)                              \
    (Adequate)                                  \
    (Affiliation)                               \
    (Age)                                       \
    (Alignment)                                 \
    (AlignmentEffects)                          \
    (All)                                       \
    (AllyOf)                                    \
    (And)                                       \
    (AntiFighterDamage)                         \
    (AntiShipDamage)                            \
    (AnyEmpire)                                 \
    (Armed)                                     \
    (Armour)                                    \
    (Article)                                   \
    (Application)                               \
    (Asteroids)                                 \
    (Barren)                                    \
    (BattleSpeed)                               \
    (BlackHole)                                 \
    (Blue)                                      \
    (Bombard)                                   \
    (Bomber)                                    \
    (BuildCost)                                 \
    (Building)                                  \
    (BuildingTypesOwned)                        \
    (BuildingType)                              \
    (BuildingTypesProduced)                     \
    (BuildingTypesScrapped)                     \
    (BuildTime)                                 \
    (CanColonize)                               \
    (CanProduceShips)                           \
    (Capacity)                                  \
    (Capital)                                   \
    (Capture)                                   \
    (CaptureResult)                             \
    (Category)                                  \
    (Class)                                     \
    (ClockwiseNextPlanetType)                   \
    (Colony)                                    \
    (Colour)                                    \
    (Condition)                                 \
    (Construction)                              \
    (ContainedBy)                               \
    (Contains)                                  \
    (Core)                                      \
    (Cos)                                       \
    (Count)                                     \
    (CountUnique)                               \
    (CounterClockwiseNextPlanetType)            \
    (CreateBuilding)                            \
    (CreatedOnTurn)                             \
    (CreateField)                               \
    (CreatePlanet)                              \
    (CreateShip)                                \
    (CreateSystem)                              \
    (CreationTurn)                              \
    (CurrentTurn)

#define TOKEN_SEQ_2                             \
    (Damage)                                    \
    (Data)                                      \
    (Defense)                                   \
    (Description)                               \
    (Desert)                                    \
    (Design)                                    \
    (DesignHasHull)                             \
    (DesignHasPart)                             \
    (DesignHasPartClass)                        \
    (DesignID)                                  \
    (DesignName)                                \
    (Destination)                               \
    (Destroy)                                   \
    (Detection)                                 \
    (DirectDistanceBetween)                     \
    (Distance)                                  \
    (DistanceFromOriginalType)                  \
    (Effects)                                   \
    (EffectsGroup)                              \
    (EffectsGroups)                             \
    (Empire)                                    \
    (EmpireMeter)                               \
    (EmpireShipsDestroyed)                      \
    (Endpoint)                                  \
    (EnemyOf)                                   \
    (Enqueued)                                  \
    (EnqueueLocation)                           \
    (Environment)                               \
    (Environments)                              \
    (ExploredByEmpire)                          \
    (External)

#define TOKEN_SEQ_3                             \
    (Field)                                     \
    (FieldType)                                 \
    (Fighters)                                  \
    (FighterType)                               \
    (FighterWeaponRange)                        \
    (FinalDestinationID)                        \
    (Fleet)                                     \
    (FleetID)                                   \
    (FleetSupplyableByEmpire)                   \
    (Foci)                                      \
    (Focus)                                     \
    (FocusType)                                 \
    (Fuel)                                      \
    (GalaxyAge)                                 \
    (GalaxyMaxAIAggression)                     \
    (GalaxyMonsterFrequency)                    \
    (GalaxyNativeFrequency)                     \
    (GalaxyPlanetDensity)                       \
    (GalaxySeed)                                \
    (GalaxyShape)                               \
    (GalaxySize)                                \
    (GalaxySpecialFrequency)                    \
    (GalaxyStarlaneFrequency)                   \
    (Gameplay_Description)                      \
    (GasGiant)                                  \
    (General)                                   \
    (GenerateSitrepMessage)                     \
    (GiveEmpireTech)                            \
    (Good)                                      \
    (Graphic)                                   \
    (Happiness)                                 \
    (HasSpecial)                                \
    (HasSpecialSinceTurn)                       \
    (HasTag)                                    \
    (High)                                      \
    (Homeworld)                                 \
    (Hostile)                                   \
    (Huge)                                      \
    (Hull)                                      \
    (Icon)                                      \
    (ID)                                        \
    (If)                                        \
    (Industry)                                  \
    (Inferno)                                   \
    (InSystem)                                  \
    (Interceptor)                               \
    (Internal)                                  \
    (Item)                                      \
    (Jumps)                                     \
    (JumpsBetween)                              \
    (Keymap)                                    \
    (Keys)

#define TOKEN_SEQ_4                             \
    (Label)                                     \
    (Large)                                     \
    (LastTurnBattleHere)                        \
    (LastTurnActiveInBattle)                    \
    (LaunchRate)                                \
    (LocalCandidate)                            \
    (Location)                                  \
    (Log)                                       \
    (Low)                                       \
    (Max)                                       \
    (MaxDefense)                                \
    (MaxFuel)                                   \
    (MaximumNumberOf)                           \
    (MaxShield)                                 \
    (MaxStructure)                              \
    (MaxSupply)                                 \
    (MaxTroops)                                 \
    (Mean)                                      \
    (Medium)                                    \
    (Message)                                   \
    (Meter)                                     \
    (Min)                                       \
    (MinimumNumberOf)                           \
    (Missiles)                                  \
    (Mode)                                      \
    (Model)                                     \
    (ModeNumberOf)                              \
    (Monster)                                   \
    (MonsterFleet)                              \
    (MountableSlotTypes)                        \
    (MoveInOrbit)                               \
    (MoveTo)                                    \
    (MoveTowards)                               \
    (Name)                                      \
    (Native)                                    \
    (Neutron)                                   \
    (NextBetterPlanetType)                      \
    (NextCloserToOriginalPlanetType)            \
    (NextLargerPlanetSize)                      \
    (NextSmallerPlanetSize)                     \
    (NextOlderStarType)                         \
    (NextSystemID)                              \
    (NextTurnPopGrowth)                         \
    (NextYoungerStarType)                       \
    (None)                                      \
    (NoStar)                                    \
    (NoStringtableLookup)                       \
    (Not)                                       \
    (Number)                                    \
    (NumberOf)                                  \
    (NumShips)                                  \

#define TOKEN_SEQ_5                             \
    (Object)                                    \
    (ObjectType)                                \
    (Ocean)                                     \
    (Or)                                        \
    (Orange)                                    \
    (Orbit)                                     \
    (OrderedBombardedBy)                        \
    (OriginalType)                              \
    (OutpostsOwned)                             \
    (OwnedBy)                                   \
    (Owner)                                     \
    (OwnerHasTech)                              \
    (OwnerLeastExpensiveEnqueuedTech)           \
    (OwnerMostExpensiveEnqueuedTech)            \
    (OwnerMostRPCostLeftEnqueuedTech)           \
    (OwnerMostRPSpentEnqueuedTech)              \
    (OwnerTopPriorityEnqueuedTech)              \
    (OwnerTradeStockpile)                       \
    (Parameters)                                \
    (Part)                                      \
    (PartCapacity)                              \
    (PartDamage)                                \
    (PartClass)                                 \
    (PartName)                                  \
    (Parts)                                     \
    (PartClassInShipDesign)                     \
    (PartsInShipDesign)                         \
    (Planet)                                    \
    (Planetbound)                               \
    (PlanetEnvironment)                         \
    (PlanetID)                                  \
    (PlanetSize)                                \
    (PlanetType)                                \
    (Playable)                                  \
    (PointDefense)                              \
    (Poor)                                      \
    (Population)                                \
    (PopulationCenter)                          \
    (Position)                                  \
    (PreferredFocus)                            \
    (Prerequisites)                             \
    (PreviousSystemID)                          \
    (Probability)                               \
    (ProducedByEmpire)                          \
    (ProducedByEmpireID)                        \
    (Producible)                                \
    (Product)                                   \
    (ProductionCenter)                          \
    (ProductionLocation)                        \
    (Progress)                                  \
    (Property)

#define TOKEN_SEQ_6                             \
    (Radiated)                                  \
    (Radius)                                    \
    (Random)                                    \
    (RandomNumber)                              \
    (Range)                                     \
    (Reason)                                    \
    (RebelTroops)                               \
    (Red)                                       \
    (Refinement)                                \
    (RemoveSpecial)                             \
    (RemoveStarlanes)                           \
    (Research)                                  \
    (Researchable)                              \
    (ResearchCost)                              \
    (ResearchTurns)                             \
    (ResourceSupplyConnected)                   \
    (ResupplyableBy)                            \
    (Retain)                                    \
    (RMS)                                       \
    (ROF)                                       \
    (RootCandidate)                             \
    (Scope)                                     \
    (SetAggressive)                             \
    (SetAntiFighterDamage)                      \
    (SetAntiShipDamage)                         \
    (SetBattleSpeed)                            \
    (SetCapacity)                               \
    (SetConstruction)                           \
    (SetDamage)                                 \
    (SetDefense)                                \
    (SetDestination)                            \
    (SetDetection)                              \
    (SetEmpireCapital)                          \
    (SetEmpireMeter)                            \
    (SetEmpireTechProgress)                     \
    (SetEmpireTradeStockpile)                   \
    (SetFighterWeaponRange)                     \
    (SetFuel)                                   \
    (SetHappiness)                              \
    (SetIndustry)                               \
    (SetLaunchRate)                             \
    (SetMaxDefense)                             \
    (SetMaxFuel)                                \
    (SetMaxShield)                              \
    (SetMaxStructure)                           \
    (SetMaxSupply)                              \
    (SetMaxTroops)                              \
    (SetOverlayTexture)                         \
    (SetOwner)                                  \
    (SetPassive)                                \
    (SetPlanetSize)                             \
    (SetPlanetType)                             \
    (SetPopulation)

#define TOKEN_SEQ_7                             \
    (SetRange)                                  \
    (SetRebelTroops)                            \
    (SetResearch)                               \
    (SetROF)                                    \
    (SetShield)                                 \
    (SetSize)                                   \
    (SetSpecies)                                \
    (SetSpeed)                                  \
    (SetStarlaneSpeed)                          \
    (SetStarType)                               \
    (SetStealth)                                \
    (SetStructure)                              \
    (SetSupply)                                 \
    (SetTargetConstruction)                     \
    (SetTargetHappiness)                        \
    (SetTargetIndustry)                         \
    (SetTargetPopulation)                       \
    (SetTargetResearch)                         \
    (SetTargetTrade)                            \
    (SetTexture)                                \
    (SetTrade)                                  \
    (SetTroops)                                 \
    (Shield)                                    \
    (ShipDesign)                                \
    (ShipDesignsDestroyed)                      \
    (ShipDesignsLost)                           \
    (ShipDesignsOwned)                          \
    (ShipDesignsProduced)                       \
    (ShipDesignsScrapped)                       \
    (Ship)                                      \
    (ShipHull)                                  \
    (ShipPart)                                  \
    (ShipPartMeter)                             \
    (Ships)                                     \
    (Short_Description)                         \
    (ShortRange)                                \
    (Sin)                                       \
    (Size)                                      \
    (SizeAsDouble)

#define TOKEN_SEQ_8                             \
    (Slot)                                      \
    (Slots)                                     \
    (SlotType)                                  \
    (Small)                                     \
    (SortBy)                                    \
    (SortKey)                                   \
    (Source)                                    \
    (Spacebound)                                \
    (SpawnLimit)                                \
    (SpawnRate)                                 \
    (Special)                                   \
    (Species)                                   \
    (SpeciesPlanetsBombed)                      \
    (SpeciesColoniesOwned)                      \
    (SpeciesPlanetsDepoped)                     \
    (SpeciesPlanetsInvaded)                     \
    (SpeciesShipsDestroyed)                     \
    (SpeciesShipsLost)                          \
    (SpeciesShipsOwned)                         \
    (SpeciesShipsProduced)                      \
    (SpeciesShipsScrapped)                      \
    (Speed)                                     \
    (Spread)                                    \
    (StackingGroup)                             \
    (Star)                                      \
    (StarlaneSpeed)                             \
    (StarType)                                  \
    (Stationary)                                \
    (Statistic)                                 \
    (StDev)                                     \
    (Stealth)                                   \
    (Structure)                                 \
    (Sum)                                       \
    (Supply)                                    \
    (Swamp)                                     \
    (System)                                    \
    (SystemID)

#define TOKEN_SEQ_9                             \
    (Tag)                                       \
    (Tags)                                      \
    (Target)                                    \
    (TargetConstruction)                        \
    (TargetHappiness)                           \
    (TargetIndustry)                            \
    (TargetPopulation)                          \
    (TargetResearch)                            \
    (TargetTrade)                               \
    (Tech)                                      \
    (TechType)                                  \
    (Terran)                                    \
    (TestValue)                                 \
    (TheEmpire)                                 \
    (Theory)                                    \
    (Tiny)                                      \
    (Toxic)                                     \
    (Trade)                                     \
    (TradeStockpile)                            \
    (Troops)                                    \
    (Tundra)                                    \
    (Turn)                                      \
    (TurnsSinceFocusChange)                     \
    (Type)                                      \
    (Uninhabitable)                             \
    (UniverseCentreX)                           \
    (UniverseCentreY)                           \
    (Unlock)                                    \
    (Unowned)                                   \
    (Unproducible)                              \
    (Unresearchable)                            \
    (Value)                                     \
    (ValueTest)                                 \
    (Victory)                                   \
    (VisibleToEmpire)                           \
    (White)                                     \
    (WithinDistance)                            \
    (WithinStarlaneJumps)                       \
    (X)                                         \
    (Y)                                         \
    (Yellow)

#define DECLARE_TOKEN(r, _, elem) extern const char* BOOST_PP_CAT(elem, _token);
BOOST_PP_SEQ_FOR_EACH(DECLARE_TOKEN, _, TOKEN_SEQ_1)
BOOST_PP_SEQ_FOR_EACH(DECLARE_TOKEN, _, TOKEN_SEQ_2)
BOOST_PP_SEQ_FOR_EACH(DECLARE_TOKEN, _, TOKEN_SEQ_3)
BOOST_PP_SEQ_FOR_EACH(DECLARE_TOKEN, _, TOKEN_SEQ_4)
BOOST_PP_SEQ_FOR_EACH(DECLARE_TOKEN, _, TOKEN_SEQ_5)
BOOST_PP_SEQ_FOR_EACH(DECLARE_TOKEN, _, TOKEN_SEQ_6)
BOOST_PP_SEQ_FOR_EACH(DECLARE_TOKEN, _, TOKEN_SEQ_7)
BOOST_PP_SEQ_FOR_EACH(DECLARE_TOKEN, _, TOKEN_SEQ_8)
BOOST_PP_SEQ_FOR_EACH(DECLARE_TOKEN, _, TOKEN_SEQ_9)
#undef DECLARE_TOKEN


#endif
