/* MW4Stats.dll — gap region 0x100132B4..0x10013990 (1756 B)
 * Contains 1 large SEH function plus NOP padding:
 *   fn1 0x100132C0 (SEH COM method, ret 8)
 * Transcribed as a single naked body covering the whole declared range.
 */

extern void* g_1002105c;
extern void* g_10021130;
extern void* g_100210ec;
extern void __cdecl FUN_1001fe28(void);
extern void __cdecl FUN_10006740(void);
extern void __cdecl FUN_10006840(void);
extern void __cdecl FUN_100067d0(void);
extern void __cdecl FUN_1000b7d0(void);
extern void __cdecl FUN_1000b850(void);

__declspec(naked) void FUN_100132b4(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn1 0x100132C0 (SEH) ---- */
        mov eax, dword ptr fs:[0]
        push -1
        push offset FUN_1001fe28
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp+0x2c]
        xor ebp, ebp
        mov eax, dword ptr [edi+0x24]
        cmp eax, ebp
        je F1_skip1
        cmp word ptr [eax], bp
        je F1_skip1
        push 3
        lea ecx, [esp+0x14]
        call FUN_10006740
        mov eax, dword ptr [edi+0x24]
        lea ecx, [esp+0x10]
        push eax
        mov dword ptr [esp+0x24], ebp
        call FUN_10006840
        mov esi, eax
        mov dword ptr [esp+0x20], 0xffffffff
        cmp esi, ebp
        lea ecx, [esp+0x10]
        jge F1_ok
        call FUN_100067d0
        mov eax, esi
        jmp F1_ret
F1_ok:
        call FUN_100067d0
F1_skip1:
        mov ecx, dword ptr [edi+0xc]
        mov ebx, dword ptr [g_1002105c]
        push -1
        push ecx
        call ebx
        test eax, eax
        jne F1_c0
        mov edx, dword ptr [edi+0xc]
        push edx
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_c0
        mov eax, dword ptr [esp+0x28]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        mov eax, 0x80070057
        jmp F1_ret
F1_c0:
        mov edx, dword ptr [edi+0x10]
        push -1
        push edx
        call ebx
        test eax, eax
        jne F1_c1
        mov eax, dword ptr [edi+0x10]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_c1
        mov eax, dword ptr [esp+0x28]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        mov eax, 0x80070057
        jmp F1_ret
F1_c1:
        mov edx, dword ptr [edi+0x14]
        push -1
        push edx
        call ebx
        test eax, eax
        jne F1_c2
        mov eax, dword ptr [edi+0x14]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_c2
        mov eax, dword ptr [esp+0x28]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        mov eax, 0x80070057
        jmp F1_ret
F1_c2:
        mov edx, dword ptr [edi+0x18]
        push -1
        push edx
        call ebx
        test eax, eax
        jne F1_c3
        mov eax, dword ptr [edi+0x18]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_c3
        mov eax, dword ptr [esp+0x28]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        mov eax, 0x80070057
        jmp F1_ret
F1_c3:
        mov edx, dword ptr [edi+0x1c]
        push -1
        push edx
        call ebx
        test eax, eax
        jne F1_c4
        mov eax, dword ptr [edi+0x1c]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_c4
        mov eax, dword ptr [esp+0x28]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        mov eax, 0x80070057
        jmp F1_ret
F1_c4:
        mov edx, dword ptr [edi+0x20]
        push -1
        push edx
        call ebx
        test eax, eax
        jne F1_c5
        mov eax, dword ptr [edi+0x20]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_c5
        mov eax, dword ptr [esp+0x28]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        mov eax, 0x80070057
        jmp F1_ret
F1_c5:
        mov edx, dword ptr [edi+0x24]
        push -1
        push edx
        call ebx
        test eax, eax
        jne F1_c6
        mov eax, dword ptr [edi+0x24]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_c6
        mov eax, dword ptr [esp+0x28]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        mov eax, 0x80070057
        jmp F1_ret
F1_c6:
        mov edx, dword ptr [edi+0x28]
        push -1
        push edx
        call ebx
        test eax, eax
        jne F1_c7
        mov eax, dword ptr [edi+0x28]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_c7
        mov eax, dword ptr [esp+0x28]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        mov eax, 0x80070057
        jmp F1_ret
F1_c7:
        mov edx, dword ptr [edi+0x2c]
        push -1
        push edx
        call ebx
        test eax, eax
        jne F1_main
        mov eax, dword ptr [edi+0x2c]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_main
        mov eax, dword ptr [esp+0x28]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        mov eax, 0x80070057
        jmp F1_ret
F1_main:
        mov esi, dword ptr [esp+0x28]
        mov eax, dword ptr [edi]
        push -1
        mov edx, dword ptr [esi+0x34]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [esi+0x34]
        mov edx, dword ptr [edi+0x34]
        mov dword ptr [ecx+0x34], edx
        mov eax, dword ptr [esi+0x34]
        mov ecx, dword ptr [edi+4]
        mov dword ptr [eax+4], ecx
        mov edx, dword ptr [esi+0x34]
        mov eax, dword ptr [edi+8]
        mov dword ptr [edx+8], eax
        mov ecx, dword ptr [edi+0xc]
        push ecx
        call ebx
        test eax, eax
        jne F1_b0
        mov eax, dword ptr [edi+0xc]
        lea edx, [esi+0x170]
        push edx
        push eax
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b0
        mov ecx, dword ptr [edi+0xc]
        push ecx
        call dword ptr [g_10021130]
        mov edx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [edx+0xc], eax
        mov eax, dword ptr [esi+0x34]
        cmp dword ptr [eax+0xc], ebp
        jne F1_b1
        mov eax, 0x80040254
        jmp F1_ret
F1_b0:
        mov ecx, dword ptr [esi+0x34]
        mov dword ptr [ecx+0xc], ebp
        mov eax, dword ptr [esi+0x17c]
        cmp eax, ebp
        jbe F1_b0_free
        mov eax, dword ptr [esi+0x170]
        cmp eax, ebp
        je F1_b0_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b0_free:
        mov dword ptr [esi+0x170], ebp
        mov dword ptr [esi+0x180], ebp
        mov dword ptr [esi+0x17c], ebp
F1_b1:
        mov edx, dword ptr [edi+0x10]
        push -1
        push edx
        call ebx
        test eax, eax
        jne F1_b1b
        mov ecx, dword ptr [edi+0x10]
        lea eax, [esi+0xd8]
        push eax
        push ecx
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b1b
        mov edx, dword ptr [edi+0x10]
        push edx
        call dword ptr [g_10021130]
        mov ecx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [ecx+0x10], eax
        mov edx, dword ptr [esi+0x34]
        cmp dword ptr [edx+0x10], ebp
        jne F1_b2
        mov eax, 0x80040254
        jmp F1_ret
F1_b1b:
        mov eax, dword ptr [esi+0x34]
        mov dword ptr [eax+0x10], ebp
        mov eax, dword ptr [esi+0xe4]
        cmp eax, ebp
        jbe F1_b1_free
        mov eax, dword ptr [esi+0xd8]
        cmp eax, ebp
        je F1_b1_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b1_free:
        mov dword ptr [esi+0xd8], ebp
        mov dword ptr [esi+0xe8], ebp
        mov dword ptr [esi+0xe4], ebp
F1_b2:
        mov ecx, dword ptr [edi+0x14]
        push -1
        push ecx
        call ebx
        test eax, eax
        jne F1_b2b
        mov eax, dword ptr [edi+0x14]
        lea edx, [esi+0x208]
        push edx
        push eax
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b2b
        mov ecx, dword ptr [edi+0x14]
        push ecx
        call dword ptr [g_10021130]
        mov edx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [edx+0x14], eax
        mov eax, dword ptr [esi+0x34]
        cmp dword ptr [eax+0x14], ebp
        jne F1_b3
        mov eax, 0x80040254
        jmp F1_ret
F1_b2b:
        mov ecx, dword ptr [esi+0x34]
        mov dword ptr [ecx+0x14], ebp
        mov eax, dword ptr [esi+0x214]
        cmp eax, ebp
        jbe F1_b2_free
        mov eax, dword ptr [esi+0x208]
        cmp eax, ebp
        je F1_b2_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b2_free:
        mov dword ptr [esi+0x208], ebp
        mov dword ptr [esi+0x218], ebp
        mov dword ptr [esi+0x214], ebp
F1_b3:
        mov edx, dword ptr [edi+0x18]
        push -1
        push edx
        call ebx
        test eax, eax
        jne F1_b3b
        mov ecx, dword ptr [edi+0x18]
        lea eax, [esi+0x2a0]
        push eax
        push ecx
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b3b
        mov edx, dword ptr [edi+0x18]
        push edx
        call dword ptr [g_10021130]
        mov ecx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [ecx+0x18], eax
        mov edx, dword ptr [esi+0x34]
        cmp dword ptr [edx+0x18], ebp
        jne F1_b4
        mov eax, 0x80040254
        jmp F1_ret
F1_b3b:
        mov eax, dword ptr [esi+0x34]
        mov dword ptr [eax+0x18], ebp
        mov eax, dword ptr [esi+0x2ac]
        cmp eax, ebp
        jbe F1_b3_free
        mov eax, dword ptr [esi+0x2a0]
        cmp eax, ebp
        je F1_b3_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b3_free:
        mov dword ptr [esi+0x2a0], ebp
        mov dword ptr [esi+0x2b0], ebp
        mov dword ptr [esi+0x2ac], ebp
F1_b4:
        mov ecx, dword ptr [edi+0x1c]
        push -1
        push ecx
        call ebx
        test eax, eax
        jne F1_b4b
        mov eax, dword ptr [edi+0x1c]
        lea edx, [esi+0x338]
        push edx
        push eax
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b4b
        mov ecx, dword ptr [edi+0x1c]
        push ecx
        call dword ptr [g_10021130]
        mov edx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [edx+0x1c], eax
        mov eax, dword ptr [esi+0x34]
        cmp dword ptr [eax+0x1c], ebp
        jne F1_b5
        mov eax, 0x80040254
        jmp F1_ret
F1_b4b:
        mov ecx, dword ptr [esi+0x34]
        mov dword ptr [ecx+0x1c], ebp
        mov eax, dword ptr [esi+0x344]
        cmp eax, ebp
        jbe F1_b4_free
        mov eax, dword ptr [esi+0x338]
        cmp eax, ebp
        je F1_b4_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b4_free:
        mov dword ptr [esi+0x338], ebp
        mov dword ptr [esi+0x348], ebp
        mov dword ptr [esi+0x344], ebp
F1_b5:
        mov edx, dword ptr [edi+0x20]
        push -1
        push edx
        call ebx
        test eax, eax
        jne F1_b5b
        mov ecx, dword ptr [edi+0x20]
        lea eax, [esi+0x3d0]
        push eax
        push ecx
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b5b
        mov edx, dword ptr [edi+0x20]
        push edx
        call dword ptr [g_10021130]
        mov ecx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [ecx+0x20], eax
        mov edx, dword ptr [esi+0x34]
        cmp dword ptr [edx+0x20], ebp
        jne F1_b6
        mov eax, 0x80040254
        jmp F1_ret
F1_b5b:
        mov eax, dword ptr [esi+0x34]
        mov dword ptr [eax+0x20], ebp
        mov eax, dword ptr [esi+0x3dc]
        cmp eax, ebp
        jbe F1_b5_free
        mov eax, dword ptr [esi+0x3d0]
        cmp eax, ebp
        je F1_b5_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b5_free:
        mov dword ptr [esi+0x3d0], ebp
        mov dword ptr [esi+0x3e0], ebp
        mov dword ptr [esi+0x3dc], ebp
F1_b6:
        mov ecx, dword ptr [edi+0x24]
        push -1
        push ecx
        call ebx
        test eax, eax
        jne F1_b6b
        mov eax, dword ptr [edi+0x24]
        lea edx, [esi+0x468]
        push edx
        push eax
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b6b
        mov ecx, dword ptr [edi+0x24]
        push ecx
        call dword ptr [g_10021130]
        mov edx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [edx+0x24], eax
        mov eax, dword ptr [esi+0x34]
        cmp dword ptr [eax+0x24], ebp
        jne F1_b7
        mov eax, 0x80040254
        jmp F1_ret
F1_b6b:
        mov ecx, dword ptr [esi+0x34]
        mov dword ptr [ecx+0x24], ebp
        mov eax, dword ptr [esi+0x474]
        cmp eax, ebp
        jbe F1_b6_free
        mov eax, dword ptr [esi+0x468]
        cmp eax, ebp
        je F1_b6_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b6_free:
        mov dword ptr [esi+0x468], ebp
        mov dword ptr [esi+0x478], ebp
        mov dword ptr [esi+0x474], ebp
F1_b7:
        mov edx, dword ptr [edi+0x28]
        push -1
        push edx
        call ebx
        test eax, eax
        jne F1_b7b
        mov ecx, dword ptr [edi+0x28]
        lea eax, [esi+0x500]
        push eax
        push ecx
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b7b
        mov edx, dword ptr [edi+0x28]
        push edx
        call dword ptr [g_10021130]
        mov ecx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [ecx+0x28], eax
        mov edx, dword ptr [esi+0x34]
        cmp dword ptr [edx+0x28], ebp
        jne F1_b8
        mov eax, 0x80040254
        jmp F1_ret
F1_b7b:
        mov eax, dword ptr [esi+0x34]
        mov dword ptr [eax+0x28], ebp
        mov eax, dword ptr [esi+0x50c]
        cmp eax, ebp
        jbe F1_b7_free
        mov eax, dword ptr [esi+0x500]
        cmp eax, ebp
        je F1_b7_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b7_free:
        mov dword ptr [esi+0x500], ebp
        mov dword ptr [esi+0x510], ebp
        mov dword ptr [esi+0x50c], ebp
F1_b8:
        mov ecx, dword ptr [edi+0x2c]
        push -1
        push ecx
        call ebx
        test eax, eax
        jne F1_b8b
        mov eax, dword ptr [edi+0x2c]
        lea edx, [esi+0x598]
        push edx
        push eax
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b8b
        mov ecx, dword ptr [edi+0x2c]
        push ecx
        call dword ptr [g_10021130]
        mov edx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [edx+0x2c], eax
        mov eax, dword ptr [esi+0x34]
        cmp dword ptr [eax+0x2c], ebp
        jne F1_done
        mov eax, 0x80040254
        jmp F1_ret
F1_b8b:
        mov ecx, dword ptr [esi+0x34]
        mov dword ptr [ecx+0x2c], ebp
        mov eax, dword ptr [esi+0x5a4]
        cmp eax, ebp
        jbe F1_b8_free
        mov eax, dword ptr [esi+0x598]
        cmp eax, ebp
        je F1_b8_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b8_free:
        mov dword ptr [esi+0x598], ebp
        mov dword ptr [esi+0x5a8], ebp
        mov dword ptr [esi+0x5a4], ebp
F1_done:
        xor eax, eax
F1_ret:
        mov ecx, dword ptr [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 8

        nop
        nop
        nop
        nop
        nop
    }
}
