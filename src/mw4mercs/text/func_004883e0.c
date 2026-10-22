/*
 * FUN_004883e0 (567 B) __thiscall constructor: initializes a 0x10-entry
 * array of growable int-vector slots (d4/d8, dc/e0) and wires a vtable.
 *
 * CFLAGS: /O1
 */

extern int g_007da738;
extern int g_007b957c;
extern int g_007b955c;
extern int g_007b9558;
extern void __cdecl FUN_0048a8a0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004883e0(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [esp+0xc]
        push    ebp
        push    edi
        mov     ebp, ecx
        mov     ecx, dword ptr [g_007da738]
        push    eax
        push    ecx
        mov     ecx, ebp
        mov     dword ptr [esp+0x14], ebp
        call    FUN_0048a8a0
        lea     edi, [ebp+0x54]
        mov     eax, edi
        mov     ecx, 0x10
loc_488408:
        mov     dword ptr [eax], 0
        mov     dword ptr [eax+4], 0
        add     eax, 8
        dec     ecx
        jnz     loc_488408
        mov     edx, dword ptr [g_007b957c]
        push    ebx
        push    esi
        xor     esi, esi
        mov     dword ptr [ebp+0xd4], esi
        mov     dword ptr [ebp+0xd8], esi
        mov     dword ptr [ebp+0xdc], esi
        push    edx
        mov     dword ptr [ebp+0xe0], esi
        mov     dword ptr [ebp], 0x76fcf8
        call    FUN_006f4950
        lea     eax, [ebp+0x14]
        mov     dword ptr [esp+0x1c], eax
        mov     dword ptr [esp+0x10], 0x10
        jmp     loc_48845d
loc_48845b:
        xor     esi, esi
loc_48845d:
        mov     ecx, dword ptr [esp+0x1c]
        mov     edx, dword ptr [g_007b955c]
        mov     eax, dword ptr [g_007b9558]
        mov     dword ptr [ecx], esi
        mov     ebx, dword ptr [edi+4]
        lea     esi, [eax+edx*1]
        cmp     esi, ebx
        jz      loc_4884de
        test    esi, esi
        jbe     loc_4884ca
        lea     ecx, [esi*4+0]
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [edi]
        add     esp, 4
        test    edx, edx
        mov     ebp, eax
        jz      loc_4884c2
        cmp     esi, ebx
        mov     ecx, esi
        jc      loc_48849c
        mov     ecx, ebx
loc_48849c:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      loc_4884b7
        lea     eax, [ebp+ecx*4]
        sub     edx, ebp
        inc     ecx
loc_4884aa:
        mov     ebx, dword ptr [edx+eax*1]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      loc_4884aa
loc_4884b7:
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
loc_4884c2:
        mov     dword ptr [edi], ebp
        mov     ebp, dword ptr [esp+0x14]
        jmp     loc_4884db
loc_4884ca:
        mov     ecx, dword ptr [edi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], 0
loc_4884db:
        mov     dword ptr [edi+4], esi
loc_4884de:
        mov     edx, dword ptr [esp+0x1c]
        mov     eax, dword ptr [esp+0x10]
        add     edx, 4
        add     edi, 8
        dec     eax
        mov     dword ptr [esp+0x1c], edx
        mov     dword ptr [esp+0x10], eax
        jnz     loc_48845b
        mov     ebx, dword ptr [ebp+0xd8]
        cmp     ebx, 1
        jz      loc_48855d
        push    4
        call    FUN_004084d0
        mov     edi, dword ptr [ebp+0xd4]
        add     esp, 4
        test    edi, edi
        mov     esi, eax
        jz      loc_48854d
        cmp     ebx, 1
        mov     ecx, 1
        ja      loc_488528
        mov     ecx, ebx
loc_488528:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      loc_488544
        mov     edx, edi
        lea     eax, [esi+ecx*4]
        sub     edx, esi
        inc     ecx
loc_488537:
        mov     ebx, dword ptr [edx+eax*1]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      loc_488537
loc_488544:
        push    edi
        call    FUN_004084e0
        add     esp, 4
loc_48854d:
        mov     dword ptr [ebp+0xd4], esi
        mov     dword ptr [ebp+0xd8], 1
loc_48855d:
        mov     edi, dword ptr [ebp+0xe0]
        cmp     edi, 1
        jz      loc_4885e5
        push    0x10
        call    FUN_004084d0
        mov     edx, dword ptr [ebp+0xdc]
        add     esp, 4
        test    edx, edx
        mov     esi, eax
        mov     dword ptr [esp+0x1c], esi
        jz      loc_4885d5
        cmp     edi, 1
        mov     ecx, 1
        ja      loc_48858e
        mov     ecx, edi
loc_48858e:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      loc_4885c6
        mov     eax, ecx
        shl     eax, 4
        add     eax, esi
        sub     edx, esi
        inc     ecx
loc_48859f:
        lea     esi, [edx+eax*1]
        mov     ebx, dword ptr [esi]
        mov     edi, eax
        mov     dword ptr [edi], ebx
        mov     ebx, dword ptr [esi+4]
        mov     dword ptr [edi+4], ebx
        mov     ebx, dword ptr [esi+8]
        mov     esi, dword ptr [esi+0xc]
        dec     ecx
        mov     dword ptr [edi+8], ebx
        sub     eax, 0x10
        test    ecx, ecx
        mov     dword ptr [edi+0xc], esi
        ja      loc_48859f
        mov     esi, dword ptr [esp+0x1c]
loc_4885c6:
        mov     eax, dword ptr [ebp+0xdc]
        push    eax
        call    FUN_004084e0
        add     esp, 4
loc_4885d5:
        mov     dword ptr [ebp+0xdc], esi
        mov     dword ptr [ebp+0xe0], 1
loc_4885e5:
        mov     edx, dword ptr [ebp+0xd8]
        test    edx, edx
        pop     esi
        pop     ebx
        jbe     loc_488608
        mov     ecx, dword ptr [ebp+0xd4]
        mov     eax, dword ptr [ebp+0xdc]
loc_4885fd:
        mov     dword ptr [ecx], eax
        add     eax, 0x10
        add     ecx, 4
        dec     edx
        jnz     loc_4885fd
loc_488608:
        call    FUN_006f49a0
        pop     edi
        mov     eax, ebp
        pop     ebp
        add     esp, 8
        ret     4
    }
}
