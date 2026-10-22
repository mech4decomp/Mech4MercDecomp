/*
 * FUN_004E8CC0 (244 B) — Adept Tile: add visible tile entity (__thiscall, RET 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern int g_7dab44;   /* DAT_007dab44 */
extern int g_7dab40;   /* DAT_007dab40 */

__declspec(naked) void __fastcall FUN_004e8cc0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x9c]
        test    al, al
        jz      L8DAE
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     eax, dword ptr [edx + 0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x4c]
        cmp     dword ptr [ecx + 0x14], 3
        jnz     L8DAE
        mov     ebx, dword ptr [esi + 0x188]
        mov     eax, dword ptr [esi + 0x180]
        cmp     ebx, eax
        push    ebp
        jc      L8D98
        add     ebx, 0xa
        mov     ebp, eax
        cmp     ebx, ebp
        jz      L8D98
        test    ebx, ebx
        jbe     L8D79
        lea     edx, [ebx*4]
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [esi + 0x17c]
        add     esp, 4
        test    edx, edx
        mov     edi, eax
        jz      L8D6D
        cmp     ebx, ebp
        mov     ecx, ebx
        jc      L8D44
        mov     ecx, ebp
    L8D44:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L8D5E
        lea     eax, [edi + ecx*4]
        sub     edx, edi
        inc     ecx
    L8D51:
        mov     ebp, dword ptr [edx + eax]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L8D51
    L8D5E:
        mov     eax, dword ptr [esi + 0x17c]
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L8D6D:
        mov     dword ptr [esi + 0x17c], edi
        mov     edi, dword ptr [esp + 0x14]
        jmp     L8D92
    L8D79:
        mov     ecx, dword ptr [esi + 0x17c]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x17c], 0
    L8D92:
        mov     dword ptr [esi + 0x180], ebx
    L8D98:
        mov     eax, dword ptr [esi + 0x188]
        mov     edx, dword ptr [esi + 0x17c]
        mov     dword ptr [edx + eax*4], edi
        inc     dword ptr [esi + 0x188]
        pop     ebp
    L8DAE:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
