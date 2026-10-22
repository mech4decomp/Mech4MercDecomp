/* MW4Stats.dll — gap region 0x10015820..0x10015DC0 (1440 B)
 * Contains 4 functions plus NOP padding:
 *   fn1 0x10015820 (ret 8)
 *   fn2 0x100159E0 (ret 4)
 *   fn3 0x10015A70 (ret 8)
 *   fn4 0x10015CC0 (ret 8)
 * Transcribed as a single naked body covering the whole declared range.
 */

extern void* g_1002105c;
extern void* g_10021130;
extern void* g_100210ec;
extern void* g_100210f4;
extern void* g_10021100;
extern unsigned short g_100262d8;
extern unsigned short g_100266d0;
extern unsigned short g_100262d0;
extern unsigned short g_100262cc;
extern unsigned short g_100266c8;
extern unsigned short g_10026250;
extern unsigned short g_100266a8;
extern unsigned short g_100266a0;
extern unsigned short g_100274ec;
extern unsigned short g_100267d0;
extern unsigned short g_100266f4;
extern void __cdecl FUN_1000b7d0(void);
extern void __cdecl FUN_1000b850(void);
extern void __cdecl FUN_1000a0e0(void);
extern void __cdecl FUN_10001680(void);
extern void __cdecl FUN_100016b0(void);
extern void __cdecl FUN_1000a0f0(void);

__declspec(naked) void FUN_10015820(void)
{
    __asm {
        /* ---- fn1 0x10015820 ---- */
        push ebx
        push ebp
        mov ebx, dword ptr [g_1002105c]
        push esi
        push edi
        mov edi, dword ptr [esp+0x18]
        push -1
        mov eax, dword ptr [edi+0xc]
        push eax
        call ebx
        test eax, eax
        jne F1_ret_err
        mov ecx, dword ptr [edi+0x10]
        push -1
        push ecx
        call ebx
        test eax, eax
        jne F1_ret_err
        mov edx, dword ptr [edi+0xc]
        push -1
        push edx
        call ebx
        test eax, eax
        jne F1_c0
        mov eax, dword ptr [edi+0xc]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        je F1_ret_err2
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
        je F1_ret_err2
F1_c1:
        mov esi, dword ptr [esp+0x14]
        mov eax, dword ptr [edi]
        push -1
        mov edx, dword ptr [esi+0x34]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [esi+0x34]
        mov edx, dword ptr [edi+0x18]
        mov dword ptr [ecx+0x18], edx
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
        lea edx, [esi+0xd4]
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
        xor ebp, ebp
        add esp, 4
        mov dword ptr [edx+0xc], eax
        mov eax, dword ptr [esi+0x34]
        cmp dword ptr [eax+0xc], ebp
        jne F1_b1
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040254
        pop ebx
        ret 8
F1_b0:
        mov ecx, dword ptr [esi+0x34]
        xor ebp, ebp
        mov dword ptr [ecx+0xc], ebp
        mov eax, dword ptr [esi+0xe0]
        cmp eax, ebp
        jbe F1_b0_free
        mov eax, dword ptr [esi+0xd4]
        cmp eax, ebp
        je F1_b0_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b0_free:
        mov dword ptr [esi+0xd4], ebp
        mov dword ptr [esi+0xe4], ebp
        mov dword ptr [esi+0xe0], ebp
F1_b1:
        mov edx, dword ptr [edi+0x10]
        push -1
        push edx
        call ebx
        test eax, eax
        jne F1_b1b
        mov ecx, dword ptr [edi+0x10]
        lea eax, [esi+0x16c]
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
        jne F1_done
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040254
        pop ebx
        ret 8
F1_b1b:
        mov eax, dword ptr [esi+0x34]
        mov dword ptr [eax+0x10], ebp
        mov eax, dword ptr [esi+0x178]
        cmp eax, ebp
        jbe F1_b1_free
        mov eax, dword ptr [esi+0x16c]
        cmp eax, ebp
        je F1_b1_free
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F1_b1_free:
        mov dword ptr [esi+0x16c], ebp
        mov dword ptr [esi+0x17c], ebp
        mov dword ptr [esi+0x178], ebp
F1_done:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
F1_ret_err2:
        mov eax, dword ptr [esp+0x14]
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x40]
F1_ret_err:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        ret 8

        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn2 0x100159E0 ---- */
        push ebx
        push esi
        mov esi, dword ptr [esp+0xc]
        push edi
        mov eax, dword ptr [esi+0x38]
        test eax, eax
        je F2_1
        mov ecx, dword ptr [eax+4]
        test ecx, ecx
        jbe F2_1
        mov eax, dword ptr [eax+0xc]
        test eax, eax
        je F2_2
        push eax
        call FUN_1000a0e0
F2_2:
        mov eax, dword ptr [esi+0x38]
        mov dword ptr [eax+4], 0
F2_1:
        mov eax, dword ptr [esi+0x34]
        mov edi, dword ptr [g_1002105c]
        mov ebx, dword ptr [g_100210ec]
        test eax, eax
        je F2_3
        mov ecx, dword ptr [eax+0xc]
        push -1
        push ecx
        call edi
        test eax, eax
        jne F2_3
        mov edx, dword ptr [esi+0x34]
        mov eax, dword ptr [edx+0xc]
        push eax
        call ebx
        mov ecx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [ecx+0xc], 0
F2_3:
        mov eax, dword ptr [esi+0x34]
        test eax, eax
        je F2_4
        mov edx, dword ptr [eax+0x10]
        push -1
        push edx
        call edi
        test eax, eax
        jne F2_4
        mov eax, dword ptr [esi+0x34]
        mov ecx, dword ptr [eax+0x10]
        push ecx
        call ebx
        mov edx, dword ptr [esi+0x34]
        add esp, 4
        mov dword ptr [edx+0x10], 0
F2_4:
        pop edi
        pop esi
        pop ebx
        ret 4

        /* ---- fn3 0x10015A70 ---- */
        mov eax, dword ptr [esp+4]
        push ebx
        push ebp
        push esi
        mov ecx, dword ptr [eax+0x34]
        mov esi, dword ptr [esp+0x14]
        push edi
        push offset g_100262d8
        mov ebx, dword ptr [ecx+4]
        mov ecx, esi
        call FUN_10001680
        push offset g_100266d0
        mov ecx, esi
        call FUN_10001680
        mov edx, offset g_100262d0
        test edx, edx
        je F3_1
        cmp word ptr [g_100262d0], 0
        je F3_1
        push edx
        call dword ptr [g_100210f4]
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_100262d0
        call FUN_100016b0
F3_1:
        mov ebp, dword ptr [g_10021100]
        push ebx
        lea edi, [esi+0x18]
        push offset g_10026250
        push 0x40
        push edi
        call ebp
        add esp, 0x10
        mov ecx, esi
        shl eax, 1
        push eax
        push edi
        call FUN_100016b0
        mov eax, offset g_100262cc
        test eax, eax
        je F3_2
        cmp word ptr [g_100262cc], 0
        je F3_2
        push eax
        call dword ptr [g_100210f4]
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_100262cc
        call FUN_100016b0
F3_2:
        mov ecx, dword ptr [esp+0x14]
        push offset g_100262d8
        mov edx, dword ptr [ecx+0x34]
        mov ecx, esi
        mov ebx, dword ptr [edx+8]
        call FUN_10001680
        push offset g_100266c8
        mov ecx, esi
        call FUN_10001680
        mov eax, offset g_100262d0
        test eax, eax
        je F3_3
        cmp word ptr [g_100262d0], 0
        je F3_3
        push eax
        call dword ptr [g_100210f4]
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_100262d0
        call FUN_100016b0
F3_3:
        push ebx
        push offset g_10026250
        push 0x40
        push edi
        call ebp
        add esp, 0x10
        mov ecx, esi
        shl eax, 1
        push eax
        push edi
        call FUN_100016b0
        mov ecx, offset g_100262cc
        test ecx, ecx
        je F3_4
        cmp word ptr [g_100262cc], 0
        je F3_4
        mov ebp, dword ptr [g_100210f4]
        push ecx
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_100262cc
        call FUN_100016b0
        jmp F3_5
F3_4:
        mov ebp, dword ptr [g_100210f4]
F3_5:
        mov ebx, dword ptr [esp+0x14]
        mov eax, dword ptr [ebx+0xe0]
        test eax, eax
        je F3_178
        jbe F3_5a
        mov edi, dword ptr [ebx+0xd4]
        jmp F3_5b
F3_5a:
        mov edi, offset g_100274ec
F3_5b:
        push offset g_100262d8
        mov ecx, esi
        call FUN_10001680
        push offset g_100266a8
        mov ecx, esi
        call FUN_10001680
        push offset g_100262d0
        mov ecx, esi
        call FUN_10001680
        test edi, edi
        je F3_5c
        cmp word ptr [edi], 0
        je F3_5c
        push edi
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push edi
        call FUN_100016b0
F3_5c:
        mov edx, offset g_100262cc
        test edx, edx
        je F3_178
        cmp word ptr [g_100262cc], 0
        je F3_178
        push edx
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_100262cc
        call FUN_100016b0
F3_178:
        mov eax, dword ptr [ebx+0x178]
        test eax, eax
        je F3_end
        jbe F3_178a
        mov edi, dword ptr [ebx+0x16c]
        jmp F3_178b
F3_178a:
        mov edi, offset g_100274ec
F3_178b:
        push offset g_100262d8
        mov ecx, esi
        call FUN_10001680
        push offset g_100266a0
        mov ecx, esi
        call FUN_10001680
        push offset g_100262d0
        mov ecx, esi
        call FUN_10001680
        test edi, edi
        je F3_178c
        cmp word ptr [edi], 0
        je F3_178c
        push edi
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push edi
        call FUN_100016b0
F3_178c:
        mov eax, offset g_100262cc
        test eax, eax
        je F3_end
        cmp word ptr [g_100262cc], 0
        je F3_end
        push eax
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_100262cc
        call FUN_100016b0
F3_end:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8

        nop
        nop

        /* ---- fn4 0x10015CC0 ---- */
        mov ecx, dword ptr [esp+8]
        push ebx
        push ebp
        push esi
        mov eax, dword ptr [ecx]
        push edi
        push 1
        push offset g_100266f4
        call dword ptr [eax+0x1c]
        mov esi, eax
        mov ebp, dword ptr [esp+0x14]
        test esi, esi
        mov ecx, dword ptr [ebp+0x38]
        mov dword ptr [ecx], 0x10
        mov edx, dword ptr [ebp+0x38]
        mov dword ptr [edx+4], 0
        je F4_1
F4_loop:
        mov ecx, dword ptr [ebp+0x38]
        push 1
        push offset g_100266f4
        mov edx, dword ptr [ecx+4]
        inc edx
        mov dword ptr [ecx+4], edx
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx+0x2c]
        test eax, eax
        jne F4_loop
F4_1:
        mov eax, dword ptr [ebp+0x38]
        mov ecx, dword ptr [eax+4]
        test ecx, ecx
        jne F4_2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040281
        pop ebx
        ret 8
F4_2:
        mov dword ptr [eax+8], ecx
        mov eax, dword ptr [ebp+0x38]
        mov ecx, dword ptr [eax+4]
        shl ecx, 2
        push ecx
        call FUN_1000a0f0
        mov edx, dword ptr [ebp+0x38]
        mov dword ptr [edx+0xc], eax
        mov eax, dword ptr [ebp+0x38]
        mov ecx, dword ptr [eax+0xc]
        test ecx, ecx
        jne F4_3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x8007000e
        pop ebx
        ret 8
F4_3:
        test esi, esi
        je F4_END
        xor eax, eax
        jmp F4_loop2
F4_loop2_entry:
        mov eax, dword ptr [esp+0x18]
F4_loop2:
        mov ecx, dword ptr [ebp+0x38]
        mov edx, dword ptr [esi]
        mov edi, dword ptr [ecx+0xc]
        mov ecx, esi
        add edi, eax
        add eax, 4
        mov dword ptr [esp+0x18], eax
        call dword ptr [edx+8]
        mov edx, dword ptr [eax]
        push 1
        push offset g_100267d0
        mov ecx, eax
        call dword ptr [edx+4]
        mov ebx, eax
        test ebx, ebx
        je F4_4
        mov eax, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [eax]
        jmp F4_5
F4_4:
        xor eax, eax
F4_5:
        test ebx, ebx
        mov dword ptr [edi], eax
        je F4_ERR
        mov edx, dword ptr [esi]
        push 1
        push offset g_100266f4
        mov ecx, esi
        call dword ptr [edx+0x2c]
        mov esi, eax
        test esi, esi
        jne F4_loop2_entry
F4_END:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
F4_ERR:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040282
        pop ebx
        ret 8
    }
}
