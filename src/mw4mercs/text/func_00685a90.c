/*
 * FUN_00685a90 (138 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Advances a linked-list/iterator stored at this+0x64, freeing the old node
 * via FUN_0068f370 + FUN_004084e0, then advances a second iterator at
 * this+0x60 (stride 0x18) and calls FUN_006858f0(param) on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0068f370(void);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_006858f0(void *p);

__declspec(naked) void __stdcall FUN_00685a90(void *param)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x64]
        test    esi, esi
        jz      L_af4
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, dword ptr [esi + 0xc]
        jz      L_aba
        add     eax, 0x8
        mov     dword ptr [esi + 0x4], eax
        cmp     eax, dword ptr [esi + 0xc]
        setnz   al
        test    al, al
        jz      L_aba
        pop     edi
        mov     al, 0x1
        pop     esi
        ret     0x4
L_aba:
        test    esi, esi
        jz      L_ace
        mov     ecx, esi
        call    FUN_0068f370
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_ace:
        mov     eax, dword ptr [edi + 0x60]
        mov     dword ptr [edi + 0x64], 0x0
        cmp     eax, dword ptr [edi + 0x54]
        jz      L_af4
        add     eax, 0x18
        mov     dword ptr [edi + 0x60], eax
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        mov     ecx, edi
        call    FUN_006858f0
        pop     edi
        pop     esi
        ret     0x4
L_af4:
        mov     eax, dword ptr [edi + 0x60]
        cmp     eax, dword ptr [edi + 0x54]
        jz      L_b13
        mov     ecx, dword ptr [esp + 0xc]
        add     eax, 0x18
        push    ecx
        mov     ecx, edi
        mov     dword ptr [edi + 0x60], eax
        call    FUN_006858f0
        pop     edi
        pop     esi
        ret     0x4
L_b13:
        pop     edi
        xor     al, al
        pop     esi
        ret     0x4
    }
}
