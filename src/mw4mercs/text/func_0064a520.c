/*
 * FUN_0064a520 (164 B) — ABL stack-heap deallocation helper. If the token
 * type (param->0x3c->4) is 3 and param->0x18 != 5, it looks up a local
 * array slot (g_00805930 + param->0x20*4), removes a matching entry from
 * the vector at g_008058b8+0x10 (shifting elements down), and frees it via
 * FUN_006f4230.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_00805930;
extern int  g_008058b8;

extern void __cdecl FUN_00563060(int);
extern void __cdecl FUN_006f4230(int);

__declspec(naked) void FUN_0064a520(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        mov     ecx, dword ptr [eax+3ch]
        cmp     dword ptr [ecx+4], 3
        push    ebx
        push    ebp
        jnz     L_a5c1
        cmp     dword ptr [eax+18h], 5
        jz      L_a5c1
        mov     ecx, dword ptr [eax+1ch]
        test    ecx, ecx
        jnz     L_a553
        mov     edx, dword ptr [eax+20h]
        mov     eax, dword ptr [g_00805930]
        lea     eax, [eax+edx*4]
        test    eax, eax
        jnz     L_a560
L_a553:
        push    0
        call    FUN_00563060
        add     esp, 4
        pop     ebp
        pop     ebx
        ret
L_a560:
        mov     ebp, dword ptr [eax]
        test    ebp, ebp
        mov     ebx, dword ptr [g_008058b8]
        mov     dword ptr [esp+0ch], ebp
        jz      L_a5c1
        mov     eax, dword ptr [ebx+14h]
        push    esi
        mov     esi, dword ptr [ebx+10h]
        cmp     esi, eax
        jz      L_a5ba
        push    edi
        lea     edi, [esi+4]
L_a57f:
        cmp     dword ptr [esi], ebp
        jnz     L_a5ae
        mov     edx, dword ptr [ebx+14h]
        cmp     edi, edx
        jz      L_a5a6
        mov     eax, edx
        sub     eax, edi
        sar     eax, 2
        test    eax, eax
        mov     ecx, esi
        jle     L_a5a6
L_a597:
        mov     ebp, dword ptr [ecx+4]
        mov     dword ptr [ecx], ebp
        add     ecx, 4
        dec     eax
        jnz     L_a597
        mov     ebp, dword ptr [esp+14h]
L_a5a6:
        add     edx, -4
        mov     dword ptr [ebx+14h], edx
        jmp     L_a5b4
L_a5ae:
        add     esi, 4
        add     edi, 4
L_a5b4:
        cmp     esi, dword ptr [ebx+14h]
        jnz     L_a57f
        pop     edi
L_a5ba:
        push    ebp
        call    FUN_006f4230
        pop     esi
L_a5c1:
        pop     ebp
        pop     ebx
        ret
    }
}
