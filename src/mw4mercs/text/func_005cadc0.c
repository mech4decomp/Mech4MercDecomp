/*
 * FUN_005cadc0 (95 B) — __thiscall. Loads a sub-object and calls
 * FUN_006832a0 with either a found object or a default.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_006832a0(void);

__declspec(naked) void __stdcall FUN_005cadc0(void)
{
    

extern int DAT_007f268c;
__asm {
push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x1c8]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_CAE00
        mov     ecx, esi
        call    FUN_0041fd80
        mov ecx, dword ptr [DAT_007f268c]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_CAE00
        mov     edi, dword ptr [edi + 0x170]
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        push    edi
        jmp     L_CAE09
L_CAE00:
        mov     edx, dword ptr [edi + 0x170]
        push    0x0
        push    edx
L_CAE09:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax + 0x18]
        push    ecx
        push    eax
        call    FUN_006832a0
        add     esp, 0x10
        pop     edi
        pop     esi
        ret     0x4
    }


}
