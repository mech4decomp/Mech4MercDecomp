/*
 * FUN_0041ddb0 (75 B) — init/alloc helper. Calls FUN_006f4710 with a
 * global and a vtable pointer, stores the result in g_007b8eec, then
 * allocates 0x14 bytes (FUN_004084d0). If non-null, constructs an object
 * via FUN_004151c0 (ECX=this) and stores it in g_007b8ee8; else zeroes it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8814;
extern int g_007b8eec;
extern int g_007b9304;
extern int g_007b8ee8;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_0041ddb0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8814]
        push    eax
        push    0x0
        push    0x76d710
        call    FUN_006f4710
        push    0x14
        mov     dword ptr [g_007b8eec], eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      loc_41ddf0
        mov     ecx, dword ptr [g_007b9304]
        push    ecx
        push    0x76d6fc
        push    0x13
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007b8ee8], eax
        ret
loc_41ddf0:
        mov     dword ptr [g_007b8ee8], 0x0
        ret
    }
}
