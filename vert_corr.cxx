TVector3 *TIdentificator::GetCorrectedVert()
{
//Electrons.
      TVector3 RotatedVertPos(X(0),Y(0),Z(0)); //vx, xy, vz from EVNT
      TVector3 RotatedVertDir(Px(0),Py(0),Pz(0));//px, py, pz from EVNT
      TVector3 TargetPos(0.043,-0.33,0);
      TVector3 *V_corr = new TVector3();
      Float_t sect = Sector(0) + 1; // Translation to Taya sector definition.
      RotatedVertPos.RotateZ(-TMath::DegToRad()*60.*sect);
      RotatedVertDir.RotateZ(-TMath::DegToRad()*60.*sect);
      TargetPos.RotateZ(-TMath::DegToRad()*60.*sect);
      Float_t ShiftLength = (TargetPos.X()-RotatedVertPos.X())/RotatedVertDir.X();
      RotatedVertDir = ShiftLength*RotatedVertDir;
      RotatedVertPos = RotatedVertPos+RotatedVertDir;
      V_corr->SetX((RotatedVertPos-TargetPos).X());
      V_corr->SetY((RotatedVertPos-TargetPos).Y());
      V_corr->SetZ(RotatedVertPos.Z());
      return V_corr;
}
