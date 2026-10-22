/*
 * FUN_100068d0 (286 B) - __fastcall.
 * SEH-guarded destructor: frees each node's data (FUN_10001d60) and the
 * nodes themselves (FUN_1000c4c0) across all lists, frees the array
 * (FUN_10001d60) if count > 1, then tail-calls FUN_1001aee0.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 */

extern int  g_10055050;                       /* DAT_10055050 */
extern void __cdecl FUN_10001d60(void);       /* rel32 call, 1 arg */
extern void __cdecl FUN_1000c4c0(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_1001aee0(void);       /* tail call */

__declspec(naked) void __fastcall FUN_100068d0(void)
{
    __asm {
        push    -0x1
        push    0x100470f8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        mov     dword ptr [esp + 0x14], ebp
        xor     eax, eax
        cmp     word ptr [ebp], ax
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x10], eax
        jbe     L_6974
    L_6902:
        mov     edx, dword ptr [ebp + 0x4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 0x4
        mov     esi, dword ptr [ebx + edx]
        add     ebx, edx
        cmp     esi, ebx
        jz      L_6969
    L_6916:
        mov     eax, 0x10006140
        test    eax, eax
        jz      L_6936
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_6936
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
        mov     dword ptr [esi + 0x8], 0x0
    L_6936:
        mov     ecx, dword ptr [esi + 0x4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [ecx], edi
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [edx + 0x4], eax
        mov     dword ptr [esi + 0x4], 0x0
        mov     dword ptr [esi], 0x0
        mov     ecx, dword ptr [g_10055050]
        push    esi
        push    ecx
        call    FUN_1000c4c0
        cmp     edi, ebx
        mov     esi, edi
        jnz     L_6916
        mov     eax, dword ptr [esp + 0x10]
    L_6969:
        inc     eax
        cmp     ax, word ptr [ebp]
        mov     dword ptr [esp + 0x10], eax
        jc      L_6902
    L_6974:
        xor     ebx, ebx
        cmp     word ptr [ebp], bx
        mov     dword ptr [ebp + 0x24], ebx
        mov     dword ptr [esp + 0x20], 0xffffffff
        jbe     L_69bc
    L_6987:
        mov     edx, dword ptr [ebp + 0x4]
        xor     esi, esi
        mov     si, bx
        shl     esi, 0x4
        mov     eax, dword ptr [esi + edx]
        add     esi, edx
        cmp     eax, esi
        jz      L_69b5
        nop
        /* __emit: 4-byte NOP (LEA ESP,[ESP+0]); MSVC6 emits 3-byte 8D 24 24 */
        __emit 0x8D
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_69a0:
        mov     edx, dword ptr [g_10055050]
        mov     edi, dword ptr [eax]
        push    eax
        push    edx
        call    FUN_1000c4c0
        cmp     edi, esi
        mov     eax, edi
        jnz     L_69a0
    L_69b5:
        inc     ebx
        cmp     bx, word ptr [ebp]
        jc      L_6987
    L_69bc:
        cmp     word ptr [ebp], 0x1
        jbe     L_69cf
        mov     eax, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_69cf:
        mov     dword ptr [ebp + 0x4], 0x0
        call    FUN_1001aee0
        mov     ecx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x14
        ret
    }
}
