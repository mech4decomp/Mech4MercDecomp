/*
 * FUN_00694ce0 (178 B) — __thiscall HUD element destructor. Decrements a
 * global live-element counter, recursively destroys sub-elements in the
 * [0x18,0x1c) array (freeing each via operator delete), then frees the
 * three other sub-arrays via FUN_00547c60 / FUN_00696c30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0082db1c;
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_00696e80(void);
extern void __cdecl FUN_00547c60(void);
extern void __cdecl FUN_00696c30(void);

__declspec(naked) void FUN_00694ce0(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+1ch]
        mov     edx, dword ptr [esi+18h]
        push    edi
        mov     edi, dword ptr [g_0082db1c]
        dec     edi
        sub     eax, edx
        sar     eax, 2
        mov     dword ptr [g_0082db1c], edi
        jz      tail
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+10h]
        mov     ebx, edx
l_loop:
        mov     edi, dword ptr [ebx]
        test    edi, edi
        jz      skipfree
        mov     ecx, edi
        call    FUN_00694ce0
        push    edi
        call    FUN_004084e0
        add     esp, 4
skipfree:
        mov     edi, dword ptr [esi+1ch]
        lea     eax, [ebx+4]
        cmp     eax, edi
        jz      next
        push    0
        push    ebp
        push    ebx
        push    edi
        push    eax
        call    FUN_00696e80
        add     esp, 14h
next:
        mov     edx, dword ptr [esi+18h]
        add     edi, -4
        mov     ecx, edi
        sub     ecx, edx
        sar     ecx, 2
        mov     dword ptr [esi+1ch], edi
        jnz     l_loop
        pop     ebp
        pop     ebx
tail:
        mov     eax, dword ptr [esi+28h]
        mov     edx, dword ptr [esi+30h]
        sub     edx, eax
        push    edx
        push    eax
        call    FUN_00547c60
        mov     eax, dword ptr [esi+18h]
        mov     ecx, dword ptr [esi+20h]
        sub     ecx, eax
        sar     ecx, 2
        push    ecx
        push    eax
        mov     dword ptr [esp+18h], eax
        call    FUN_00696c30
        mov     eax, dword ptr [esi+0ch]
        mov     edx, dword ptr [esi+14h]
        sub     edx, eax
        push    edx
        push    eax
        call    FUN_00547c60
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi+8]
        sub     ecx, eax
        push    ecx
        push    eax
        call    FUN_00547c60
        add     esp, 20h
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
