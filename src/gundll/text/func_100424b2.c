// FUN_100424b2 (0x100424B2) __thiscall, 241 bytes
extern int __cdecl FUN_10044dc6(void *);
extern void __cdecl FUN_10044d2f(int, void *);
extern int __cdecl FUN_1004153c(void *, void *, int);
extern int * __cdecl FUN_1004277d(void);
extern int __cdecl FUN_10044c48(void *);
extern unsigned int g_10076aa0[];
extern void *g_10051984;

__declspec(naked) void FUN_100424b2(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, dword ptr [ebp+8]
        push edi
        test byte ptr [esi+0xc], 0x40
        jnz loc_42586
        mov eax, dword ptr [esi+0x10]
        cmp eax, -1
        jz loc_424e4
        mov ecx, eax
        sar ecx, 5
        and eax, 0x1f
        mov ecx, dword ptr [ecx*4 + g_10076aa0]
        lea eax, [eax+eax*8]
        lea eax, [ecx+eax*4]
        jmp loc_424e9
loc_424e4:
        mov eax, 0x100518b8
loc_424e9:
        test byte ptr [eax+4], 0x80
        jz loc_42586
        dec dword ptr [esi+4]
        push 1
        pop edi
        js loc_42505
        mov ecx, dword ptr [esi]
        movzx eax, byte ptr [ecx]
        inc ecx
        mov dword ptr [esi], ecx
        jmp loc_4250c
loc_42505:
        push esi
        call FUN_10044dc6
        pop ecx
loc_4250c:
        cmp eax, -1
        jnz loc_4251a
loc_42511:
        or ax, 0xffff
        jmp loc_4259f
loc_4251a:
        mov ecx, dword ptr [g_10051984]
        mov byte ptr [ebp-4], al
        movzx eax, al
        test byte ptr [ecx+eax*2+1], 0x80
        jz loc_4255d
        dec dword ptr [esi+4]
        js loc_4253c
        mov ecx, dword ptr [esi]
        movzx eax, byte ptr [ecx]
        inc ecx
        mov dword ptr [esi], ecx
        jmp loc_42543
loc_4253c:
        push esi
        call FUN_10044dc6
        pop ecx
loc_42543:
        cmp eax, -1
        jnz loc_42557
        movsx eax, byte ptr [ebp-4]
        push esi
        push eax
        call FUN_10044d2f
        pop ecx
        pop ecx
        jmp loc_42511
loc_42557:
        push 2
        mov byte ptr [ebp-3], al
        pop edi
loc_4255d:
        lea eax, [ebp-4]
        push edi
        push eax
        lea eax, [ebp+0xa]
        push eax
        call FUN_1004153c
        add esp, 0xc
        cmp eax, -1
        jnz loc_42580
        call FUN_1004277d
        mov dword ptr [eax], 0x2a
        jmp loc_42511
loc_42580:
        mov ax, word ptr [ebp+0xa]
        jmp loc_4259f
loc_42586:
        add dword ptr [esi+4], -2
        js loc_42598
        mov ecx, dword ptr [esi]
        mov ax, word ptr [ecx]
        add ecx, 2
        mov dword ptr [esi], ecx
        jmp loc_4259f
loc_42598:
        push esi
        call FUN_10044c48
        pop ecx
loc_4259f:
        pop edi
        pop esi
        leave
        ret
    }
}
