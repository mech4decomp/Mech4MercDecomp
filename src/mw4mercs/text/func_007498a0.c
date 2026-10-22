/*
 * FUN_007498a0 (163 B) — __fastcall (ECX = this).
 *
 * Guarded by globals DAT_008b79ec / DAT_00858990 and [this]==0. Depending on
 * [this+0xc] (2 or 4) and [this+0x10], calls FUN_0075b6e0, compares
 * coordinates, calls WaitForSingleObject([this+0x3c],0), and conditionally
 * calls FUN_00749950 / FUN_0075b0d0 / FUN_0075b040 / FUN_0075b6e0. Returns
 * 0 or 1 in AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_008b79ec;   /* DAT_008b79ec */
extern char g_00858990;   /* DAT_00858990 */
extern void *g_0076b0f4;  /* WaitForSingleObject IAT */

extern void __cdecl FUN_0075b6e0(int a, void *b);
extern void __cdecl FUN_0075b0d0(int a, int b, int c);
extern void __cdecl FUN_0075b040(int a, int b);
extern void __fastcall FUN_00749950(void *this);

__declspec(naked) int __fastcall FUN_007498a0(int *this)
{
    __asm {
        mov     al, byte ptr [g_008b79ec]
        test    al, al
        push    esi
        push    edi
        mov     esi, ecx
        jz      L909
        mov     al, byte ptr [g_00858990]
        test    al, al
        jnz     L909
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L909
        mov     ecx, dword ptr [esi + 0xc]
        cmp     ecx, 0x2
        jz      L93E
        cmp     ecx, 0x4
        jnz     L8D0
        mov     ecx, dword ptr [esi + 0x10]
        test    ecx, ecx
        jz      L93E
L8D0:
        lea     edi, [esi + 0x18]
        push    edi
        push    eax
        call    FUN_0075b6e0
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, dword ptr [esi + 0x2c]
        jl      L933
        jg      L8EB
        mov     ecx, dword ptr [edi]
        cmp     ecx, dword ptr [esi + 0x28]
        jc      L933
L8EB:
        mov     edx, dword ptr [esi + 0x3c]
        push    0x0
        push    edx
        call    dword ptr [g_0076b0f4]
        test    eax, eax
        jnz     L93E
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jnz     L90E
        mov     ecx, esi
        call    FUN_00749950
L909:
        pop     edi
        xor     al, al
        pop     esi
        ret
L90E:
        cmp     eax, 0x1
        jnz     L933
        push    ebx
        mov     ebx, dword ptr [esi]
        push    0x0
        push    0x0
        push    ebx
        call    FUN_0075b0d0
        push    0x1
        push    ebx
        call    FUN_0075b040
        lea     eax, [esi + 0x30]
        push    eax
        push    ebx
        call    FUN_0075b6e0
        pop     ebx
L933:
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [edi + 0x4]
        mov     dword ptr [esi + 0x30], ecx
        mov     dword ptr [esi + 0x34], edx
L93E:
        pop     edi
        mov     al, 0x1
        pop     esi
        ret
    }
}
