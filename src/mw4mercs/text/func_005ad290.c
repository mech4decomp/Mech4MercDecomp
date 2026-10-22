/*
 * FUN_005AD290 (72 B) — __thiscall (ECX = this), RET 4 (one dword param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005AD080(void);
extern void __cdecl FUN_005AD120(void);
extern void __cdecl FUN_0041FD80(void);
extern void __cdecl FUN_0041FCB0(void);
extern void __cdecl FUN_0041FCD0(void);

__declspec(naked) void __stdcall FUN_005AD290(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        push    0x0
        call    FUN_005AD080
        push    0x0
        mov     ecx, esi
        call    FUN_005AD120
        add     esi, 0x18
        mov     ecx, esi
        call    FUN_0041FD80
        test    eax, eax
        jz      L2B9
        mov     byte ptr [eax + 0x340], 0x0
L2B9:
        mov     ecx, esi
        call    FUN_0041FCB0
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        mov     ecx, esi
        call    FUN_0041FCD0
        mov     byte ptr [edi + 0x340], 0x1
        pop     edi
        pop     esi
        ret     4
    }
}
