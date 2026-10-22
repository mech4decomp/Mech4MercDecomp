/*
 * FUN_00705d80 (540 B) — __fastcall config-string parser. Scans a backslash-
 * escaped directive string at this+0x7c and routes each \x directive to a
 * per-field string-copy routine via a jump table (0x705f9c) + byte table
 * (0x705fc0). Fields at this+0x1834/0x1878/0x18b8/0x18f8/0x1938/0x1978 and
 * indexed buffers at this+0xc34/0x1234.
 *
 * __fastcall (ECX = this), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_705fc0;   /* byte table at 0x00705fc0 */
extern int  g_705f9c;   /* jump table at 0x00705f9c */

__declspec(naked) void __fastcall FUN_00705d80(void *p)
{
    __asm {
        push    ebp
        push    edi
        mov     edi, ecx
        mov     dl, byte ptr [edi + 0x7c]
        test    dl, dl
        lea     eax, [edi + 0x7c]
        lea     ebp, [edi + 0x1878]
        lea     ecx, [edi + 0x1834]
        mov     dword ptr [edi + 0x1874], 0
        mov     byte ptr [ebp], 0
        mov     byte ptr [ecx], 0
        mov     byte ptr [edi + 0x18b8], 0
        mov     byte ptr [edi + 0x18f8], 0
        mov     byte ptr [edi + 0x1938], 0
        mov     byte ptr [edi + 0x1978], 0
        jz      L_99
        push    ebx
        push    esi
        jz      L_8b
L_d3:
        cmp     dl, 0x5c
        jnz     L_8b
        movsx   edx, byte ptr [eax + 0x1]
        inc     eax
        add     edx, -0x61
        cmp     edx, 0x15
        ja      L_81
        xor     ebx, ebx
        mov     bl, byte ptr [edx + g_705fc0]
        jmp     dword ptr [ebx*4 + g_705f9c]
        /* case 'g' -> this+0x1878 (EBP) */
        mov     dl, byte ptr [eax + 0x2]
        add     eax, 0x2
        test    dl, dl
        mov     esi, ebp
        jz      L_7e
L_0c:
        cmp     dl, 0x5c
        jz      L_7e
        mov     byte ptr [esi], dl
        mov     dl, byte ptr [eax + 0x1]
        inc     esi
        inc     eax
        test    dl, dl
        jnz     L_0c
        jmp     L_7e
        /* case 'm' -> this+0x1834 (ECX) */
        mov     dl, byte ptr [eax + 0x2]
        add     eax, 0x2
        test    dl, dl
        mov     esi, ecx
        jz      L_7e
L_35:
        cmp     dl, 0x5c
        jz      L_7e
        mov     byte ptr [esi], dl
        mov     dl, byte ptr [eax + 0x1]
        inc     esi
        inc     eax
        test    dl, dl
        jnz     L_35
        jmp     L_7e
        /* case 'p' -> this + idx*0x40 + 0xc34 */
        movsx   edx, byte ptr [eax + 0x1]
        movsx   esi, byte ptr [eax + 0x2]
        mov     ebx, dword ptr [edi + 0x1874]
        lea     edx, [edx + edx*4]
        lea     edx, [esi + edx*2 - 0x210]
        lea     esi, [edx + 0x1]
        add     eax, 0x4
        cmp     esi, ebx
        jle     L_76
        mov     dword ptr [edi + 0x1874], esi
L_76:
        shl     edx, 0x6
        lea     esi, [edx + edi + 0xc34]
        mov     dl, byte ptr [eax]
        test    dl, dl
        jz      L_7e
L_8a:
        cmp     dl, 0x5c
        jz      L_7e
        mov     byte ptr [esi], dl
        mov     dl, byte ptr [eax + 0x1]
        inc     esi
        inc     eax
        test    dl, dl
        jnz     L_8a
        jmp     L_7e
        /* case 'c' -> this + idx*0x40 + 0x1234 */
        movsx   edx, byte ptr [eax + 0x1]
        movsx   esi, byte ptr [eax + 0x2]
        mov     ebx, dword ptr [edi + 0x1874]
        lea     edx, [edx + edx*4]
        lea     edx, [esi + edx*2 - 0x210]
        lea     esi, [edx + 0x1]
        add     eax, 0x4
        cmp     esi, ebx
        jle     L_cb
        mov     dword ptr [edi + 0x1874], esi
L_cb:
        shl     edx, 0x6
        lea     esi, [edx + edi + 0x1234]
        mov     dl, byte ptr [eax]
        test    dl, dl
        jz      L_7e
L_df:
        cmp     dl, 0x5c
        jz      L_7e
        mov     byte ptr [esi], dl
        mov     dl, byte ptr [eax + 0x1]
        inc     esi
        inc     eax
        test    dl, dl
        jnz     L_df
        jmp     L_7e
        /* case 'v' -> this+0x18b8 */
        mov     dl, byte ptr [eax + 0x2]
        add     eax, 0x2
        test    dl, dl
        lea     esi, [edi + 0x18b8]
        jz      L_7e
L_08:
        cmp     dl, 0x5c
        jz      L_7e
        mov     byte ptr [esi], dl
        mov     dl, byte ptr [eax + 0x1]
        inc     esi
        inc     eax
        test    dl, dl
        jnz     L_08
        jmp     L_7e
        /* case 'a' -> this+0x18f8 */
        mov     dl, byte ptr [eax + 0x2]
        add     eax, 0x2
        test    dl, dl
        lea     esi, [edi + 0x18f8]
        jz      L_7e
L_2a:
        cmp     dl, 0x5c
        jz      L_7e
        mov     byte ptr [esi], dl
        mov     dl, byte ptr [eax + 0x1]
        inc     esi
        inc     eax
        test    dl, dl
        jnz     L_2a
        jmp     L_7e
        /* case 'h' -> this+0x1938 */
        mov     dl, byte ptr [eax + 0x2]
        add     eax, 0x2
        test    dl, dl
        lea     esi, [edi + 0x1938]
        jz      L_7e
L_4c:
        cmp     dl, 0x5c
        jz      L_7e
        mov     byte ptr [esi], dl
        mov     dl, byte ptr [eax + 0x1]
        inc     esi
        inc     eax
        test    dl, dl
        jnz     L_4c
        jmp     L_7e
        /* case 'r' -> this+0x1978 */
        mov     dl, byte ptr [eax + 0x2]
        add     eax, 0x2
        test    dl, dl
        lea     esi, [edi + 0x1978]
        jz      L_7e
L_6e:
        cmp     dl, 0x5c
        jz      L_7e
        mov     byte ptr [esi], dl
        mov     dl, byte ptr [eax + 0x1]
        inc     esi
        inc     eax
        test    dl, dl
        jnz     L_6e
L_7e:
        mov     byte ptr [esi], 0
L_81:
        mov     dl, byte ptr [eax]
        test    dl, dl
        jnz     L_d3
L_8b:
        mov     dl, byte ptr [eax + 0x1]
        inc     eax
        test    dl, dl
        jnz     L_d3
        pop     esi
        pop     ebx
L_99:
        pop     edi
        pop     ebp
        ret
    }
}
