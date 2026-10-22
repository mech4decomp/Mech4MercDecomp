/*
 * FUN_1001CB10 (31 B) - __fastcall (this in ecx), RET 0x4.  Destructor:
 * sets vtable pointer 0x1004a8dc, and if arg0 & 1, calls FUN_10001d60
 * (shared_free) on this.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __fastcall FUN_1001CB10(void)
{
    __asm {
        test    byte ptr [esp + 4], 1
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x1004a8dc
        je      L_cb29
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_cb29:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
