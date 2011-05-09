%hook EOWAppDelegate

- (void)backToCallerApplication:(id)callerApplication
{
  [self alertView:nil clickedButtonAtIndex:1];
}

%end