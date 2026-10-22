/*
 * FUN_004fc600 (193 B) — __thiscall, RET 0x4: MLR/Adept loader helper that
 * reads a stream into a 0x1c-byte record array (18 entries), then releases
 * the array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004fd3c0(void);
extern void __cdecl FUN_00412a50(void);

__declspec(naked) void FUN_004fc600(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x4
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ebx, 0x12
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], ebx
        call    dword ptr [eax + 0x24]
        lea     ebp, [edi + 0x10]
        mov     dword ptr [esp + 0x28], ebx
    L_fc62b:
        xor     edi, edi
        push    ebp
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x24], edi
        call    FUN_004fd3c0
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], edx
        call    dword ptr [eax + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        xor     ebx, ebx
        cmp     eax, edi
        jbe     L_fc697
    L_fc65f:
        mov     edx, dword ptr [esp + 0x1c]
        lea     eax, [edi + edx + 0x10]
        push    eax
        push    esi
        call    FUN_00412a50
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [edi + ecx + 0x18]
        mov     eax, dword ptr [esi]
        add     esp, 0x8
        push    0x4
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], edx
        call    dword ptr [eax + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        inc     ebx
        add     edi, 0x1c
        cmp     ebx, eax
        jc      L_fc65f
    L_fc697:
        mov     ecx, dword ptr [esp + 0x1c]
        test    ecx, ecx
        jz      L_fc6a5
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
    L_fc6a5:
        mov     eax, dword ptr [esp + 0x28]
        add     ebp, 0x8
        dec     eax
        mov     dword ptr [esp + 0x28], eax
        jnz     L_fc62b
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x4
    }
}
