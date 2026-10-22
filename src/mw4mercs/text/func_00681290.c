/*
 * FUN_00681290 (95 B) — __thiscall HUD element helper. Calls a virtual
 * method at param_2+0x82db40 with (param_1, this->0x10, this->0x14),
 * allocates 0x24 bytes (FUN_004084d0); if non-null constructs a
 * FUN_00680ef0 object (5 args), else EAX=0. Then calls FUN_004179b0 on
 * the sub-object at [this + param_3*4 + 0x70].
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned long size);
extern void *__stdcall FUN_00680ef0(void);
extern void __cdecl FUN_004179b0(void *obj);

__declspec(naked) void __stdcall FUN_00681290(void *param_1, void *param_2, int param_3, void *param_4)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, dword ptr [esi + 0x10]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        mov     eax, edi
        shl     eax, 5
        push    ebx
        call    dword ptr [eax + 0x82db40]
        push    0x24
        mov     ebp, eax
        call    FUN_004084d0
        add     esp, 0x10
        test    eax, eax
        jz      L_d8
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        push    edi
        push    ebp
        push    ebx
        mov     ecx, eax
        call    FUN_00680ef0
        jmp     L_da
L_d8:
        xor     eax, eax
L_da:
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esi + eax*4 + 0x70]
        call    FUN_004179b0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
