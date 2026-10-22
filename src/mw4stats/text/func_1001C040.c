/*
 * FUN_1001c040 (179 B) - __thiscall (2 args, RET 0x8). WaitForMultipleObjects
 * wrapper: calls FUN_1001bfb0 for a timeout, then waits on 2 handles at
 * this+0x20, mapping the result code into param_2 and a status field.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210a4;   /* IAT: WaitForMultipleObjects */
extern void __cdecl FUN_1001bfb0(void);

__declspec(naked) void __cdecl FUN_1001c040(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_1001bfb0
        test    eax, eax
        jnz     L_c06a
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x4], 0xa
        pop     edi
        pop     esi
        mov     dword ptr [eax], 0x3
        xor     al, al
        ret     8
L_c06a:
        test    edi, edi
        jz      L_c070
        mov     eax, edi
L_c070:
        push    eax
        lea     ecx, [esi + 0x20]
        push    0x0
        push    ecx
        push    0x2
        call    dword ptr [g_100210a4]
        mov     ecx, dword ptr [esp + 0x10]
        cmp     eax, 0x80
        mov     dword ptr [ecx], eax
        ja      L_c0c4
        jz      L_c0b0
        sub     eax, 0x0
        jz      L_c0a3
        dec     eax
        jnz     L_c0cb
        pop     edi
        mov     dword ptr [ecx], 0x2
        xor     al, al
        pop     esi
        ret     8
L_c0a3:
        pop     edi
        mov     dword ptr [ecx], 0x1
        mov     al, 0x1
        pop     esi
        ret     8
L_c0b0:
        mov     dword ptr [esi + 0x4], 0x9
        pop     edi
        mov     dword ptr [ecx], 0x4
        xor     al, al
        pop     esi
        ret     8
L_c0c4:
        cmp     eax, 0x102
        jz      L_c0df
L_c0cb:
        mov     dword ptr [esi + 0x4], 0x6
        pop     edi
        mov     dword ptr [ecx], 0x5
        xor     al, al
        pop     esi
        ret     8
L_c0df:
        mov     dword ptr [esi + 0x4], 0xa
        pop     edi
        mov     dword ptr [ecx], 0x3
        xor     al, al
        pop     esi
        ret     8
    }
}
