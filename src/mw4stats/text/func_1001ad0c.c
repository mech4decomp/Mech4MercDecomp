/* MW4Stats.dll — gap region 0x1001AD0C..0x1001B290 (1412 B)
 * Contains 2 functions plus NOP padding:
 *   fn1 0x1001AD10 (ret 8)
 *   fn2 0x1001B190 (ret 4)
 * Transcribed as a single naked body covering the whole declared range.
 */

extern void* g_1002105c;
extern void* g_10021130;
extern void* g_100210ec;
extern void __cdecl FUN_1000b7d0(void);
extern void __cdecl FUN_1000b850(void);

__declspec(naked) void FUN_1001ad0c(void)
{
    __asm {
        nop
        nop
        nop
        nop

        /* ---- fn1 0x1001AD10 ---- */
        push ebx
        push ebp
        mov ebp, dword ptr [g_1002105c]
        push esi
        push edi
        mov edi, dword ptr [esp+0x18]
        push -1
        mov eax, dword ptr [edi+0x14]
        push eax
        call ebp
        test eax, eax
        je F1_0
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        ret 8
F1_0:
        mov ecx, dword ptr [edi+8]
        push -1
        push ecx
        call ebp
        test eax, eax
        jne F1_1
        mov edx, dword ptr [edi+8]
        push edx
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_1
        mov eax, dword ptr [esp+0x14]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        ret 8
F1_1:
        mov edx, dword ptr [edi+0xc]
        push -1
        push edx
        call ebp
        test eax, eax
        jne F1_2
        mov eax, dword ptr [edi+0xc]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_2
        mov eax, dword ptr [esp+0x14]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        ret 8
F1_2:
        mov edx, dword ptr [edi+0x10]
        push -1
        push edx
        call ebp
        test eax, eax
        jne F1_3
        mov eax, dword ptr [edi+0x10]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_3
        mov eax, dword ptr [esp+0x14]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        ret 8
F1_3:
        mov edx, dword ptr [edi+0x14]
        push -1
        push edx
        call ebp
        test eax, eax
        jne F1_4
        mov eax, dword ptr [edi+0x14]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_4
        mov eax, dword ptr [esp+0x14]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        ret 8
F1_4:
        mov edx, dword ptr [edi+0x18]
        push -1
        push edx
        call ebp
        test eax, eax
        jne F1_5
        mov eax, dword ptr [edi+0x18]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_5
        mov eax, dword ptr [esp+0x14]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        ret 8
F1_5:
        mov edx, dword ptr [edi+0x1c]
        push -1
        push edx
        call ebp
        test eax, eax
        jne F1_main
        mov eax, dword ptr [edi+0x1c]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        jne F1_main
        mov eax, dword ptr [esp+0x14]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        ret 8
F1_main:
        mov esi, dword ptr [esp+0x14]
        mov eax, dword ptr [edi]
        push -1
        mov edx, dword ptr [esi+0x34]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [esi+0x34]
        mov edx, dword ptr [edi+0x24]
        mov dword ptr [ecx+0x24], edx
        mov eax, dword ptr [esi+0x34]
        mov ecx, dword ptr [edi+4]
        mov dword ptr [eax+4], ecx
        mov edx, dword ptr [edi+8]
        push edx
        call ebp
        test eax, eax
        jne F1_b0
        mov ecx, dword ptr [edi+8]
        lea eax, [esi+0xd4]
        push eax
        push ecx
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b0
        mov edx, dword ptr [edi+8]
        push edx
        call dword ptr [g_10021130]
        mov ecx, dword ptr [esi+0x34]
        xor ebx, ebx
        add esp, 4
        mov dword ptr [ecx+8], eax
        mov edx, dword ptr [esi+0x34]
        cmp dword ptr [edx+8], ebx
        jne F1_b1
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040254
        pop ebx
        ret 8
F1_b0:
        mov eax, dword ptr [esi+0x34]
        xor ebx, ebx
        mov dword ptr [eax+8], ebx
        mov eax, dword ptr [esi+0xe0]
        cmp eax, ebx
        jbe F1_b0_free
        mov eax, dword ptr [esi+0xd4]
        cmp eax, ebx
        je F1_b0_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b0_free:
        mov dword ptr [esi+0xd4], ebx
        mov dword ptr [esi+0xe4], ebx
        mov dword ptr [esi+0xe0], ebx
F1_b1:
        mov ecx, dword ptr [edi+0xc]
        push -1
        push ecx
        call ebp
        test eax, eax
        jne F1_b1b
        mov eax, dword ptr [edi+0xc]
        lea edx, [esi+0x16c]
        push edx
        push eax
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b1b
        mov ecx, dword ptr [edi+0xc]
        push ecx
        call dword ptr [g_10021130]
        mov edx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [edx+0xc], eax
        mov eax, dword ptr [esi+0x34]
        cmp dword ptr [eax+0xc], ebx
        jne F1_b2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040254
        pop ebx
        ret 8
F1_b1b:
        mov ecx, dword ptr [esi+0x34]
        mov dword ptr [ecx+0xc], ebx
        mov eax, dword ptr [esi+0x178]
        cmp eax, ebx
        jbe F1_b1_free
        mov eax, dword ptr [esi+0x16c]
        cmp eax, ebx
        je F1_b1_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b1_free:
        mov dword ptr [esi+0x16c], ebx
        mov dword ptr [esi+0x17c], ebx
        mov dword ptr [esi+0x178], ebx
F1_b2:
        mov edx, dword ptr [edi+0x10]
        push -1
        push edx
        call ebp
        test eax, eax
        jne F1_b2b
        mov ecx, dword ptr [edi+0x10]
        lea eax, [esi+0x204]
        push eax
        push ecx
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b2b
        mov edx, dword ptr [edi+0x10]
        push edx
        call dword ptr [g_10021130]
        mov ecx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [ecx+0x10], eax
        mov edx, dword ptr [esi+0x34]
        cmp dword ptr [edx+0x10], ebx
        jne F1_b3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040254
        pop ebx
        ret 8
F1_b2b:
        mov eax, dword ptr [esi+0x34]
        mov dword ptr [eax+0x10], ebx
        mov eax, dword ptr [esi+0x210]
        cmp eax, ebx
        jbe F1_b2_free
        mov eax, dword ptr [esi+0x204]
        cmp eax, ebx
        je F1_b2_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b2_free:
        mov dword ptr [esi+0x204], ebx
        mov dword ptr [esi+0x214], ebx
        mov dword ptr [esi+0x210], ebx
F1_b3:
        mov ecx, dword ptr [edi+0x14]
        push -1
        push ecx
        call ebp
        test eax, eax
        jne F1_b3b
        mov eax, dword ptr [edi+0x14]
        lea edx, [esi+0x29c]
        push edx
        push eax
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b3b
        mov ecx, dword ptr [edi+0x14]
        push ecx
        call dword ptr [g_10021130]
        mov edx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [edx+0x14], eax
        mov eax, dword ptr [esi+0x34]
        cmp dword ptr [eax+0x14], ebx
        jne F1_b4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040254
        pop ebx
        ret 8
F1_b3b:
        mov ecx, dword ptr [esi+0x34]
        mov dword ptr [ecx+0x14], ebx
        mov eax, dword ptr [esi+0x2a8]
        cmp eax, ebx
        jbe F1_b3_free
        mov eax, dword ptr [esi+0x29c]
        cmp eax, ebx
        je F1_b3_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b3_free:
        mov dword ptr [esi+0x29c], ebx
        mov dword ptr [esi+0x2ac], ebx
        mov dword ptr [esi+0x2a8], ebx
F1_b4:
        mov edx, dword ptr [edi+0x18]
        push -1
        push edx
        call ebp
        test eax, eax
        jne F1_b4b
        mov ecx, dword ptr [edi+0x18]
        lea eax, [esi+0x334]
        push eax
        push ecx
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b4b
        mov edx, dword ptr [edi+0x18]
        push edx
        call dword ptr [g_10021130]
        mov ecx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [ecx+0x18], eax
        mov edx, dword ptr [esi+0x34]
        cmp dword ptr [edx+0x18], ebx
        jne F1_b5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040254
        pop ebx
        ret 8
F1_b4b:
        mov eax, dword ptr [esi+0x34]
        mov dword ptr [eax+0x18], ebx
        mov eax, dword ptr [esi+0x340]
        cmp eax, ebx
        jbe F1_b4_free
        mov eax, dword ptr [esi+0x334]
        cmp eax, ebx
        je F1_b4_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b4_free:
        mov dword ptr [esi+0x334], ebx
        mov dword ptr [esi+0x344], ebx
        mov dword ptr [esi+0x340], ebx
F1_b5:
        mov ecx, dword ptr [edi+0x1c]
        push -1
        push ecx
        call ebp
        test eax, eax
        jne F1_b5b
        mov eax, dword ptr [edi+0x1c]
        lea edx, [esi+0x3cc]
        push edx
        push eax
        call FUN_1000b850
        add esp, 8
        test al, al
        je F1_b5b
        mov ecx, dword ptr [edi+0x1c]
        push ecx
        call dword ptr [g_10021130]
        mov edx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [edx+0x1c], eax
        mov eax, dword ptr [esi+0x34]
        cmp dword ptr [eax+0x1c], ebx
        jne F1_done
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040254
        pop ebx
        ret 8
F1_b5b:
        mov ecx, dword ptr [esi+0x34]
        mov dword ptr [ecx+0x1c], ebx
        mov eax, dword ptr [esi+0x3d8]
        cmp eax, ebx
        jbe F1_b5_free
        mov eax, dword ptr [esi+0x3cc]
        cmp eax, ebx
        je F1_b5_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b5_free:
        mov dword ptr [esi+0x3cc], ebx
        mov dword ptr [esi+0x3dc], ebx
        mov dword ptr [esi+0x3d8], ebx
F1_done:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8

        nop
        nop
        nop
        nop

        /* ---- fn2 0x1001B190 ---- */
        push ebx
        push ebp
        mov ebx, dword ptr [g_100210ec]
        push esi
        mov esi, dword ptr [esp+0x10]
        xor ebp, ebp
        push edi
        mov edi, dword ptr [g_1002105c]
        mov eax, dword ptr [esi+0x34]
        cmp eax, ebp
        je F2_0
        mov eax, dword ptr [eax+8]
        push -1
        push eax
        call edi
        test eax, eax
        jne F2_0
        mov ecx, dword ptr [esi+0x34]
        mov edx, dword ptr [ecx+8]
        push edx
        call ebx
        mov eax, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [eax+8], ebp
F2_0:
        mov eax, dword ptr [esi+0x34]
        cmp eax, ebp
        je F2_1
        mov ecx, dword ptr [eax+0xc]
        push -1
        push ecx
        call edi
        test eax, eax
        jne F2_1
        mov edx, dword ptr [esi+0x34]
        mov eax, dword ptr [edx+0xc]
        push eax
        call ebx
        mov ecx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [ecx+0xc], ebp
F2_1:
        mov eax, dword ptr [esi+0x34]
        cmp eax, ebp
        je F2_2
        mov edx, dword ptr [eax+0x10]
        push -1
        push edx
        call edi
        test eax, eax
        jne F2_2
        mov eax, dword ptr [esi+0x34]
        mov ecx, dword ptr [eax+0x10]
        push ecx
        call ebx
        mov edx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [edx+0x10], ebp
F2_2:
        mov eax, dword ptr [esi+0x34]
        cmp eax, ebp
        je F2_3
        mov eax, dword ptr [eax+0x14]
        push -1
        push eax
        call edi
        test eax, eax
        jne F2_3
        mov ecx, dword ptr [esi+0x34]
        mov edx, dword ptr [ecx+0x14]
        push edx
        call ebx
        mov eax, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [eax+0x14], ebp
F2_3:
        mov eax, dword ptr [esi+0x34]
        cmp eax, ebp
        je F2_4
        mov ecx, dword ptr [eax+0x18]
        push -1
        push ecx
        call edi
        test eax, eax
        jne F2_4
        mov edx, dword ptr [esi+0x34]
        mov eax, dword ptr [edx+0x18]
        push eax
        call ebx
        mov ecx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [ecx+0x18], ebp
F2_4:
        mov eax, dword ptr [esi+0x34]
        cmp eax, ebp
        je F2_5
        mov edx, dword ptr [eax+0x1c]
        push -1
        push edx
        call edi
        test eax, eax
        jne F2_5
        mov eax, dword ptr [esi+0x34]
        mov ecx, dword ptr [eax+0x1c]
        push ecx
        call ebx
        mov edx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [edx+0x1c], ebp
F2_5:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4

        nop
        nop
        nop
        nop
        nop
    }
}
