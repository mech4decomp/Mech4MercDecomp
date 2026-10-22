/*
 * FUN_005c58b0 (256 B) — __thiscall, RET 4. Copies a 0x30-byte block,
 * stores a pointer with tag bits, and dispatches several helpers.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_005c6bd0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005cbe30(void);
extern void __cdecl FUN_005cb6c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005d1180(void);
extern void __cdecl FUN_005b5350(void);

__declspec(naked) void __stdcall FUN_005c58b0(void *param)
{
    

extern int DAT_007f2460;
extern int DAT_007f2104;
__asm {
        mov eax, dword ptr [DAT_007f2460]
        push    ebx
        push    eax
        mov     ebx, ecx
        call    FUN_006f4950
        mov eax, dword ptr [DAT_007f2104]
        mov     ecx, dword ptr [ebx + 0x170]
        mov     ecx, dword ptr [ecx + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_58df
        call    FUN_006f49a0
        pop     ebx
        ret     4
L_58df:
        push    ebp
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_005c6bd0
        mov     ebp, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0x4]
        mov     ecx, dword ptr [ebp + 0x8]
        push    0x30
        mov     dword ptr [ebx + 0x4f0], edx
        mov     dword ptr [ebx + 0x4f4], eax
        mov     dword ptr [ebx + 0x4f8], ecx
        mov     byte ptr [ebx + 0x548], 0x0
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_593c
        mov     edx, dword ptr [ebx + 0x170]
        mov     esi, dword ptr [edx + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        mov     edi, eax
        rep movsd
        mov     edi, eax
        jmp     L_593e
L_593c:
        xor     edi, edi
L_593e:
        mov     eax, dword ptr [ebx + 0x59c]
        lea     esi, [ebx + 0x59c]
        push    0x0
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], eax
        call    FUN_005cbe30
        or      edi, 0x1
        mov     dword ptr [esi], edi
        mov     esi, dword ptr [esp + 0x14]
        push    0x0
        lea     ecx, [esp + 0x18]
        call    FUN_005cbe30
        lea     ecx, [esp + 0x14]
        call    FUN_005cb6c0
        mov     ecx, esi
        and     ecx, 0x1
        cmp     cl, 0x1
        jnz     L_598f
        mov     edx, esi
        and     esi, 0xfffffffc
        push    esi
        and     edx, 0x2
        call    FUN_004084e0
        add     esp, 0x4
L_598f:
        push    0x0
        mov     ecx, ebx
        call    FUN_005d1180
        mov     ecx, dword ptr [ebx + 0x170]
        push    ebp
        call    FUN_005b5350
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }


}
