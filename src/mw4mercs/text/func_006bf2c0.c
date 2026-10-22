/* FUN_006bf2c0 - gosScript anim/script viewport setup (RET 0x14) */

extern int g_858940;                /* 0x00858940 */
extern int g_858944;                /* 0x00858944 */

extern void __cdecl FUN_006bf4a0(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_00713ae0(void);

void __declspec(naked) func_006bf2c0(void)
{
    __asm {
        sub esp, 0x88
        push esi
        push edi
        call FUN_006bf4a0
        mov edi, dword ptr [esp+0x94]
        test edi, edi
        jge L_2e1
        xor edi, edi
        mov dword ptr [esp+0x94], edi
L_2e1:
        mov esi, dword ptr [esp+0x9c]
        test esi, esi
        jge L_2f5
        xor esi, esi
        mov dword ptr [esp+0x9c], esi
L_2f5:
        mov edx, dword ptr [esp+0x98]
        test edx, edx
        jge L_309
        xor edx, edx
        mov dword ptr [esp+0x98], edx
L_309:
        mov ecx, dword ptr [esp+0xa0]
        test ecx, ecx
        jge L_31d
        xor ecx, ecx
        mov dword ptr [esp+0xa0], ecx
L_31d:
        mov eax, dword ptr [g_858940]
        cmp edi, eax
        jle L_32f
        mov edi, eax
        mov dword ptr [esp+0x94], edi
L_32f:
        cmp esi, eax
        jle L_33c
        mov esi, eax
        mov dword ptr [esp+0x9c], esi
L_33c:
        mov eax, dword ptr [g_858944]
        cmp edx, eax
        jle L_34e
        mov edx, eax
        mov dword ptr [esp+0x98], edx
L_34e:
        cmp ecx, eax
        jle L_35b
        mov ecx, eax
        mov dword ptr [esp+0xa0], ecx
L_35b:
        cmp edi, esi
        jz L_494
        cmp edx, ecx
        jz L_494
        fild dword ptr [esp+0x94]
        mov esi, dword ptr [esp+0xa4]
        xor eax, eax
        mov ecx, 0x20
        lea edi, [esp+0x10]
        rep stosd
        fst dword ptr [esp+0x10]
        fild dword ptr [esp+0x98]
        fst dword ptr [esp+0x8]
        mov ecx, dword ptr [esp+0x8]
        fstp dword ptr [esp+0x14]
        push 0x0
        push 0x1
        fstp dword ptr [esp+0x38]
        mov dword ptr [esp+0x24], 0x3f800000
        fild dword ptr [esp+0xa8]
        mov dword ptr [esp+0x44], 0x3f800000
        mov dword ptr [esp+0x64], 0x3f800000
        mov dword ptr [esp+0x84], 0x3f800000
        fst dword ptr [esp+0x3c]
        mov dword ptr [esp+0x28], esi
        fild dword ptr [esp+0xa4]
        mov dword ptr [esp+0x48], esi
        mov dword ptr [esp+0x68], esi
        mov dword ptr [esp+0x7c], ecx
        fst dword ptr [esp+0x14]
        mov eax, dword ptr [esp+0x14]
        fstp dword ptr [esp+0x58]
        mov dword ptr [esp+0x78], eax
        mov dword ptr [esp+0x88], esi
        fstp dword ptr [esp+0x5c]
        call FUN_00713cc0
        push 0x1
        push 0x4
        call FUN_00713cc0
        push 0x0
        push 0x5
        call FUN_00713cc0
        push 0x0
        push 0x6
        call FUN_00713cc0
        push 0x0
        push 0x7
        call FUN_00713cc0
        push 0x0
        push 0x8
        call FUN_00713cc0
        push 0x0
        push 0x9
        call FUN_00713cc0
        push 0x0
        push 0xa
        call FUN_00713cc0
        push 0x0
        push 0xb
        call FUN_00713cc0
        push 0x2
        push 0x10
        call FUN_00713cc0
        push 0x1
        push 0xf
        call FUN_00713cc0
        push 0x0
        push 0x13
        call FUN_00713cc0
        and esi, 0xff000000
        cmp esi, 0xff000000
        jnz L_47f
        push 0x1
        jmp L_481
L_47f:
        push 0x3
L_481:
        push 0xd
        call FUN_00713cc0
        push 0x4
        lea edx, [esp+0x14]
        push edx
        call FUN_00713ae0
L_494:
        pop edi
        pop esi
        add esp, 0x88
        ret 0x14
    }
}
