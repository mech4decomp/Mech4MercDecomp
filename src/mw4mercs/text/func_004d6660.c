/*
 * FUN_004d6660 (216 B) — __thiscall MLR/Adept helper. Reads two byte
 * fields from global object at 0x007dc728, calls a virtual method on
 * this->[0x24], then loops over a byte-count product calling
 * FUN_004e2f20 / FUN_0041eae0 / FUN_0041ea10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_007dc728;
extern void __cdecl FUN_004e2f20(void);
extern void __cdecl FUN_0041eae0(void);
extern void __cdecl FUN_0041ea10(void);

__declspec(naked) void FUN_004d6660(void)
{
    __asm {
        sub     esp, 10h
        mov     eax, dword ptr [g_007dc728]
        mov     dl, byte ptr [eax+150h]
        mov     al, byte ptr [eax+151h]
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     esi, [ecx+24h]
        mov     byte ptr [esp+18h], dl
        mov     edx, dword ptr [esi]
        xor     edi, edi
        push    edi
        mov     ecx, esi
        mov     byte ptr [esp+20h], al
        call    dword ptr [edx+0ch]
        mov     ebx, dword ptr [esp+18h]
        mov     eax, dword ptr [esp+1ch]
        and     ebx, 0ffh
        and     eax, 0ffh
        imul    ebx, eax
        xor     ebp, ebp
        test    ebx, ebx
        mov     dword ptr [esi+8], 0ffffffech
        mov     dword ptr [esp+14h], ebp
        jle     L6720
    L66B4:
        mov     ecx, dword ptr [g_007dc728]
        push    ebp
        call    FUN_004e2f20
        mov     ecx, dword ptr [eax+188h]
        shl     edi, 3
        test    ecx, ecx
        mov     dword ptr [eax+184h], edi
        jle     L6700
    L66D3:
        mov     edi, dword ptr [eax+17ch]
        mov     ebp, ecx
    L66DB:
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [ecx+10h]
        shr     edx, 13h
        lea     eax, [esp+13h]
        and     dl, 1
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp+17h], dl
        call    FUN_0041eae0
        add     edi, 4
        dec     ebp
        jnz     L66DB
        mov     ebp, dword ptr [esp+14h]
    L6700:
        mov     ecx, esi
        call    FUN_0041ea10
        mov     ecx, dword ptr [esi+10h]
        mov     edi, dword ptr [esi+14h]
        sub     edi, ecx
        inc     ebp
        mov     ecx, ebp
        and     ecx, 0ffffh
        cmp     ecx, ebx
        mov     dword ptr [esp+14h], ebp
        jl      L66B4
    L6720:
        mov     edx, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [edx+0ch]
        pop     edi
        mov     dword ptr [esi+8], 0ffffffech
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 10h
        ret
    }
}
