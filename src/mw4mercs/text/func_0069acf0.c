/*
 * FUN_0069ACF0 (154 B) — __cdecl (1 stack arg, RET 0). Builds a 0xC-stride
 * structure at [arg] from [arg2]'s fields, allocating via FUN_005DB560,
 * and calls FUN_0069AE40/FUN_0069AD90/FUN_005CC0F0 to fill it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005DB560(void);
extern void __cdecl FUN_0069AE40(void);
extern void __cdecl FUN_0069AD90(void);
extern void __cdecl FUN_005CC0F0(void);

__declspec(naked) void FUN_0069ACF0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        xor     ecx, ecx
        cmp     esi, ecx
        je      loc_69ad88
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        mov     al, byte ptr [ebx + 8]
        push    ebp
        mov     ebp, dword ptr [ebx]
        push    edi
        mov     edi, dword ptr [ebx + 4]
        sub     edi, ebp
        mov     dword ptr [esi], ecx
        inc     edi
        cmp     edi, -2
        mov     byte ptr [esi + 8], al
        mov     dword ptr [esi + 4], ecx
        mov     dword ptr [esi + 8], ecx
        ja      loc_69ad3c
        cmp     edi, ecx
        je      loc_69ad30
        push    edi
        call    FUN_005DB560
        add     esp, 4
        jmp     loc_69ad32
loc_69ad30:
        xor     eax, eax
loc_69ad32:
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 4], eax
        add     eax, edi
        mov     dword ptr [esi + 8], eax
loc_69ad3c:
        push    ebp
        call    FUN_0069AE40
        add     esp, 4
        push    eax
        lea     eax, [esp + 0x18]
        push    ebp
        push    eax
        call    FUN_0069AD90
        mov     edx, dword ptr [esi]
        xor     ecx, ecx
        mov     cl, byte ptr [eax]
        mov     eax, dword ptr [ebx + 4]
        add     esp, 8
        push    ecx
        push    edx
        push    eax
        push    ebp
        call    FUN_005CC0F0
        add     ebx, 0xc
        add     esp, 0x14
        mov     dword ptr [esi + 4], eax
        mov     byte ptr [eax], 0
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [ebx + 4]
        mov     edx, dword ptr [ebx + 8]
        add     esi, 0xc
        mov     dword ptr [esi], eax
        pop     edi
        mov     dword ptr [esi + 4], ecx
        pop     ebp
        mov     dword ptr [esi + 8], edx
        pop     ebx
loc_69ad88:
        pop     esi
        ret
    }
}
