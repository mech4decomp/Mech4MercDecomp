/* FUN_0064dfc0 - ABL vector append/grow helper (315 B, __thiscall RET 4) */

extern int __cdecl FUN_0064e100(void);
extern int __cdecl FUN_0064df70(int);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_0064dfc0(void)
{
    __asm {
        sub esp, 10h
        push ebx
        push ebp
        mov ebp, ecx
        mov dword ptr [esp + 14h], ebp
        call FUN_0064e100
        mov ebx, dword ptr [eax]
        mov ecx, ebp
        mov dword ptr [esp + 8], ebx
        call FUN_0064e100
        cmp ebx, dword ptr [eax + 4]
        jz loc_64e0f3
        push esi
        push edi
loc_64dfe8:
        mov esi, dword ptr [ebx]
        test esi, esi
        jl loc_64e0da
        push esi
        call FUN_0064df70
        add esp, 4
        test eax, eax
        jz loc_64e0da
        push esi
        call FUN_0064df70
        mov edi, eax
        mov eax, dword ptr [esp + 28h]
        mov esi, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 8]
        add esp, 4
        cmp esi, ecx
        jz loc_64e02d
        test esi, esi
        jz loc_64e022
        mov dword ptr [esi], edi
loc_64e022:
        add esi, 4
        mov dword ptr [eax + 4], esi
        jmp loc_64e0da
loc_64e02d:
        mov ebx, dword ptr [eax]
        mov eax, esi
        sub eax, ebx
        sar eax, 2
        cmp eax, 1
        mov dword ptr [esp + 14h], 1
        mov dword ptr [esp + 18h], eax
        lea ecx, [esp + 14h]
        jc loc_64e04f
        lea ecx, [esp + 18h]
loc_64e04f:
        mov ecx, dword ptr [ecx]
        add ecx, eax
        mov dword ptr [esp + 18h], ecx
        jz loc_64e06d
        lea eax, [ecx*4]
        push eax
        call FUN_004084d0
        add esp, 4
        mov ebp, eax
        jmp loc_64e06f
loc_64e06d:
        xor ebp, ebp
loc_64e06f:
        cmp ebx, esi
        mov eax, ebp
        jz loc_64e089
        mov ecx, ebx
loc_64e077:
        test eax, eax
        jz loc_64e07f
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
loc_64e07f:
        add ecx, 4
        add eax, 4
        cmp ecx, esi
        jnz loc_64e077
loc_64e089:
        test eax, eax
        jz loc_64e08f
        mov dword ptr [eax], edi
loc_64e08f:
        cmp esi, esi
        lea edi, [eax + 4]
        jz loc_64e0ad
loc_64e096:
        mov eax, esi
        sub eax, edi
loc_64e09a:
        test edi, edi
        jz loc_64e0a3
        mov ecx, dword ptr [eax + edi]
        mov dword ptr [edi], ecx
loc_64e0a3:
        add edi, 4
        lea edx, [eax + edi]
        cmp edx, esi
        jnz loc_64e09a
loc_64e0ad:
        test ebx, ebx
        mov dword ptr [esp + 14h], ebx
        jz loc_64e0be
        push ebx
        call FUN_004084e0
        add esp, 4
loc_64e0be:
        mov eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [esp + 18h]
        mov ebx, dword ptr [esp + 10h]
        lea edx, [ebp + ecx*4]
        mov dword ptr [eax], ebp
        mov ebp, dword ptr [esp + 1ch]
        mov dword ptr [eax + 4], edi
        mov dword ptr [eax + 8], edx
loc_64e0da:
        add ebx, 4
        mov ecx, ebp
        mov dword ptr [esp + 10h], ebx
        call FUN_0064e100
        cmp ebx, dword ptr [eax + 4]
        jnz loc_64dfe8
        pop edi
        pop esi
loc_64e0f3:
        pop ebp
        pop ebx
        add esp, 10h
        ret 4
    }
}
