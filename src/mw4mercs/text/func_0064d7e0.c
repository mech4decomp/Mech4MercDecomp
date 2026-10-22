/* FUN_0064d7e0 - ABL stack/object operator dispatch (461 B) */

extern int g_00805908;
extern char *g_00805918;
extern int *g_0080592c;
extern int g_0080d9b0;
extern int g_0080d9b4;
extern int g_0080d9bc;
extern double g_0076d970;
extern unsigned char g_64d9c0;   /* switch byte table (data, outside fn slice) */
extern int g_64d9b0;             /* switch jump table (data, outside fn slice) */

extern int __cdecl FUN_0064d580(void);
extern int __cdecl FUN_0064c950(int);

__declspec(naked) void FUN_0064d7e0(void)
{
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        call FUN_0064d580
        mov esi, eax
loc_64d7eb:
        mov edi, dword ptr [g_00805908]
        cmp edi, 5
        jz loc_64d80e
        cmp edi, 13h
        jz loc_64d80e
        cmp edi, 20h
        jz loc_64d80e
        cmp edi, 31h
        jz loc_64d80e
        cmp edi, 1ch
        jnz loc_64d9a6
loc_64d80e:
        push esi
        call FUN_0064c950
        mov esi, eax
        mov eax, dword ptr [g_00805918]
        movsx ecx, byte ptr [eax]
        inc eax
        mov dword ptr [g_00805908], ecx
        mov dword ptr [g_00805918], eax
        call FUN_0064d580
        push eax
        call FUN_0064c950
        mov edx, dword ptr [g_0080592c]
        add esp, 8
        cmp edi, 1ch
        mov ebp, eax
        lea ecx, [edx - 4]
        jnz loc_64d87c
        cmp dword ptr [ecx], 0
        jz loc_64d867
        cmp dword ptr [edx], 0
        jz loc_64d867
        mov esi, dword ptr [g_0080d9b0]
        mov eax, 1
        mov dword ptr [ecx], eax
        mov dword ptr [g_0080592c], ecx
        jmp loc_64d7eb
loc_64d867:
        mov esi, dword ptr [g_0080d9b0]
        xor eax, eax
        mov dword ptr [ecx], eax
        mov dword ptr [g_0080592c], ecx
        jmp loc_64d7eb
loc_64d87c:
        lea eax, [edi - 5]
        cmp eax, 2ch
        ja loc_64d99b
        xor ebx, ebx
        mov bl, byte ptr [eax + g_64d9c0]
        jmp dword ptr [ebx*4 + g_64d9b0]
loc_64d897:
        mov eax, dword ptr [g_0080d9bc]
        cmp esi, eax
        jnz loc_64d8bc
        cmp ebp, eax
        jnz loc_64d8b8
        mov edx, dword ptr [edx]
        imul edx, dword ptr [ecx]
        mov dword ptr [ecx], edx
        mov esi, eax
        mov dword ptr [g_0080592c], ecx
        jmp loc_64d7eb
loc_64d8b8:
        fild dword ptr [ecx]
        fstp dword ptr [ecx]
loc_64d8bc:
        cmp ebp, eax
        jnz loc_64d8c4
        fild dword ptr [edx]
        fstp dword ptr [edx]
loc_64d8c4:
        fld dword ptr [edx]
        mov esi, dword ptr [g_0080d9b4]
        fmul dword ptr [ecx]
        mov dword ptr [g_0080592c], ecx
        fstp dword ptr [ecx]
        jmp loc_64d7eb
loc_64d8db:
        mov edi, dword ptr [g_0080d9bc]
        cmp esi, edi
        jnz loc_64d916
        cmp ebp, edi
        jnz loc_64d912
        mov esi, dword ptr [edx]
        test esi, esi
        jnz loc_64d8fe
        mov dword ptr [ecx], esi
        mov esi, edi
        mov dword ptr [g_0080592c], ecx
        jmp loc_64d7eb
loc_64d8fe:
        mov eax, dword ptr [ecx]
        cdq
        idiv esi
        mov esi, edi
        mov dword ptr [g_0080592c], ecx
        mov dword ptr [ecx], eax
        jmp loc_64d7eb
loc_64d912:
        fild dword ptr [ecx]
        fstp dword ptr [ecx]
loc_64d916:
        cmp ebp, edi
        jnz loc_64d91e
        fild dword ptr [edx]
        fstp dword ptr [edx]
loc_64d91e:
        fld dword ptr [edx]
        fcomp qword ptr [g_0076d970]
        __emit 0xDF   /* fnstsw ax: MSVC6 adds 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz loc_64d944
        mov esi, dword ptr [g_0080d9b4]
        mov dword ptr [ecx], 0
        mov dword ptr [g_0080592c], ecx
        jmp loc_64d7eb
loc_64d944:
        fld dword ptr [ecx]
        mov esi, dword ptr [g_0080d9b4]
        fdiv dword ptr [edx]
        mov dword ptr [g_0080592c], ecx
        fstp dword ptr [ecx]
        jmp loc_64d7eb
loc_64d95b:
        mov esi, dword ptr [edx]
        test esi, esi
        jnz loc_64d974
        mov dword ptr [ecx], esi
        mov esi, dword ptr [g_0080d9bc]
        mov dword ptr [g_0080592c], ecx
        jmp loc_64d7eb
loc_64d974:
        cmp edi, 20h
        mov eax, dword ptr [ecx]
        cdq
        jnz loc_64d991
        idiv esi
        mov esi, dword ptr [g_0080d9bc]
        mov dword ptr [g_0080592c], ecx
        mov dword ptr [ecx], eax
        jmp loc_64d7eb
loc_64d991:
        idiv esi
        mov esi, dword ptr [g_0080d9bc]
        mov dword ptr [ecx], edx
loc_64d99b:
        mov dword ptr [g_0080592c], ecx
        jmp loc_64d7eb
loc_64d9a6:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
