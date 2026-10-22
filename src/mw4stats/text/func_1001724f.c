/* MW4Stats.dll — gap region 0x1001724F..0x10017580 (817 B)
 * Contains 2 functions plus 1 leading NOP:
 *   fn1 0x10017250 (ret 8)
 *   fn2 0x10017480 (ret 8)
 */

extern void* g_100210f4;
extern void* g_10021100;
extern unsigned short g_100262d8;
extern unsigned short g_100266d0;
extern unsigned short g_100262d0;
extern unsigned short g_10026250;
extern unsigned short g_100262cc;
extern unsigned short g_100266c8;
extern unsigned short g_10026698;
extern unsigned short g_100274ec;
extern unsigned short g_100266f4;
extern unsigned short g_1002681c;
extern void __cdecl FUN_10001680(void);
extern void __cdecl FUN_100016b0(void);
extern void __cdecl FUN_1000a0f0(void);

__declspec(naked) void FUN_1001724f(void)
{
    __asm {
        nop

        /* ---- fn1 0x10017250 ---- */
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
        mov ebp, dword ptr [g_100210f4]
        mov edx, offset g_100266d0
        test edx, edx
        je F1_1
        cmp word ptr [g_100266d0], 0
        je F1_1
        push edx
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_100266d0
        call FUN_100016b0
F1_1:
        mov eax, offset g_100262d0
        test eax, eax
        je F1_2
        cmp word ptr [g_100262d0], 0
        je F1_2
        push eax
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_100262d0
        call FUN_100016b0
F1_2:
        push ebx
        lea edi, [esi+0x18]
        push offset g_10026250
        push 0x40
        push edi
        call dword ptr [g_10021100]
        add esp, 0x10
        mov ecx, esi
        shl eax, 1
        push eax
        push edi
        call FUN_100016b0
        mov ecx, offset g_100262cc
        test ecx, ecx
        je F1_3
        cmp word ptr [g_100262cc], 0
        je F1_3
        push ecx
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_100262cc
        call FUN_100016b0
F1_3:
        mov edx, dword ptr [esp+0x14]
        push offset g_100262d8
        mov ecx, esi
        mov eax, dword ptr [edx+0x34]
        mov ebx, dword ptr [eax+8]
        call FUN_10001680
        mov ecx, offset g_100266c8
        test ecx, ecx
        je F1_4
        cmp word ptr [g_100266c8], 0
        je F1_4
        push ecx
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_100266c8
        call FUN_100016b0
F1_4:
        mov edx, offset g_100262d0
        test edx, edx
        je F1_5
        cmp word ptr [g_100262d0], 0
        je F1_5
        push edx
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_100262d0
        call FUN_100016b0
F1_5:
        push ebx
        push offset g_10026250
        push 0x40
        push edi
        call dword ptr [g_10021100]
        add esp, 0x10
        mov ecx, esi
        shl eax, 1
        push eax
        push edi
        call FUN_100016b0
        mov eax, offset g_100262cc
        test eax, eax
        je F1_6
        cmp word ptr [g_100262cc], 0
        je F1_6
        push eax
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_100262cc
        call FUN_100016b0
F1_6:
        mov ecx, dword ptr [esp+0x14]
        mov eax, dword ptr [ecx+0xe0]
        test eax, eax
        je F1_7
        jbe F1_8
        mov edi, dword ptr [ecx+0xd4]
        jmp F1_9
F1_8:
        mov edi, offset g_100274ec
F1_9:
        push offset g_100262d8
        mov ecx, esi
        call FUN_10001680
        mov ecx, offset g_10026698
        test ecx, ecx
        je F1_10
        cmp word ptr [g_10026698], 0
        je F1_10
        push ecx
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_10026698
        call FUN_100016b0
F1_10:
        mov edx, offset g_100262d0
        test edx, edx
        je F1_11
        cmp word ptr [g_100262d0], 0
        je F1_11
        push edx
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_100262d0
        call FUN_100016b0
F1_11:
        test edi, edi
        je F1_12
        cmp word ptr [edi], 0
        je F1_12
        push edi
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push edi
        call FUN_100016b0
F1_12:
        mov eax, offset g_100262cc
        test eax, eax
        je F1_7
        cmp word ptr [g_100262cc], 0
        je F1_7
        push eax
        call ebp
        add esp, 4
        mov ecx, esi
        shl eax, 1
        push eax
        push offset g_100262cc
        call FUN_100016b0
F1_7:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8

        /* ---- fn2 0x10017480 ---- */
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
        je F2_1
F2_2:
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
        jne F2_2
F2_1:
        mov eax, dword ptr [ebp+0x38]
        mov ecx, dword ptr [eax+4]
        test ecx, ecx
        jne F2_3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040281
        pop ebx
        ret 8
F2_3:
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
        jne F2_4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x8007000e
        pop ebx
        ret 8
F2_4:
        test esi, esi
        je F2_5
        xor eax, eax
        jmp F2_6
F2_7:
        mov eax, dword ptr [esp+0x18]
F2_6:
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
        push offset g_1002681c
        mov ecx, eax
        call dword ptr [edx+4]
        mov ebx, eax
        test ebx, ebx
        je F2_8
        mov eax, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [eax]
        jmp F2_9
F2_8:
        xor eax, eax
F2_9:
        test ebx, ebx
        mov dword ptr [edi], eax
        je F2_10
        mov edx, dword ptr [esi]
        push 1
        push offset g_100266f4
        mov ecx, esi
        call dword ptr [edx+0x2c]
        mov esi, eax
        test esi, esi
        jne F2_7
F2_5:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
F2_10:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040282
        pop ebx
        ret 8
    }
}
