/*
 * FUN_00733640 (57 B) — __cdecl, RET 8 (2 stack params).
 *
 * Calls FUN_004084c0(g_8aa284, 0x104); if non-null, calls FUN_00733c20
 * (ECX = result) and stores the result to *param1; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aa284;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_00733c20(void);

__declspec(naked) void __cdecl FUN_00733640(void)
{
    __asm {
        mov     eax, dword ptr [g_8aa284]
        push    eax
        push    0x104
        call    FUN_004084c0
        add     esp, 0x8
        test    eax, eax
        jz      label1
        mov     ecx, dword ptr [esp + 0x8]
        push    0x0
        push    ecx
        mov     ecx, eax
        call    FUN_00733c20
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [edx], eax
        ret     0x8
label1:
        mov     ecx, dword ptr [esp + 0x4]
        xor     eax, eax
        mov     dword ptr [ecx], eax
        ret     0x8
    }
}
