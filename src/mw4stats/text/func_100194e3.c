/* MW4Stats.dll — gap region 0x100194E3..0x10019920 (1085 B)
 * Contains 3 distinct functions plus NOP padding:
 *   fn1 0x100194F0 (COM method, ret 0x10)
 *   fn2 0x100195F0 (string builder, ret 8)
 *   fn3 0x10019830 (COM method, ret 8)
 * Transcribed as a single naked body covering the whole declared range.
 */

extern unsigned short g_100245a8;
extern unsigned short g_100262d8;
extern unsigned short g_10026704;
extern unsigned short g_100262d0;
extern unsigned short g_100262cc;
extern unsigned short g_100262c4;
extern unsigned short g_10026250;
extern void* g_100210f4;
extern void* g_10021064;
extern void* g_10021100;
extern void* g_100210f8;
extern void* g_100210ec;
extern void __cdecl FUN_1000a0f0(void);
extern void __cdecl FUN_1001e1b0(void);
extern void __cdecl FUN_100016b0(void);
extern void __cdecl FUN_1001e380(void);
extern void __cdecl FUN_100067c0(void);
extern void __cdecl FUN_1000a0e0(void);

__declspec(naked) void FUN_100194e3(void)
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
        nop

        /* ---- fn1 0x100194F0 ---- */
        push ebx
        push esi
        mov esi, dword ptr [esp+0xc]
        push edi
        mov eax, dword ptr [esi+0x34]
        test eax, eax
        je L1
        pop edi
        pop esi
        mov eax, 0x80040210
        pop ebx
        ret 0x10
L1:
        mov ebx, dword ptr [esp+0x14]
        test ebx, ebx
        jne L2
        pop edi
        pop esi
        mov eax, 0x80070057
        pop ebx
        ret 0x10
L2:
        push 0x14
        call FUN_1000a0f0
        test eax, eax
        mov dword ptr [esi+0x34], eax
        jne L3
        pop edi
        pop esi
        mov eax, 0x80040257
        pop ebx
        ret 0x10
L3:
        xor ecx, ecx
        mov edi, dword ptr [esp+0x18]
        mov dword ptr [eax], ecx
        push edi
        mov dword ptr [eax+4], ecx
        push esi
        mov dword ptr [eax+8], ecx
        mov dword ptr [eax+0xc], ecx
        mov dword ptr [eax+0x10], ecx
        mov edx, dword ptr [esi+0x34]
        mov eax, dword ptr [edi]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [esi+0x34]
        mov edx, dword ptr [edi+0x10]
        mov dword ptr [ecx+0x10], edx
        mov eax, dword ptr [esi+0x34]
        mov ecx, dword ptr [edi+0xc]
        mov dword ptr [eax+0xc], ecx
        mov edx, dword ptr [esi]
        mov dword ptr [esi+0x14], ebx
        call dword ptr [edx+0x28]
        mov ebx, eax
        test ebx, ebx
        jge L4
        mov eax, dword ptr [esi]
        push esi
        call dword ptr [eax+0x40]
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ret 0x10
L4:
        mov ecx, dword ptr [edi+0xc]
        mov edx, dword ptr [esp+0x1c]
        mov eax, dword ptr [esi]
        lea ebx, [esi+0x3c]
        push ebx
        push esi
        mov dword ptr [esi+4], ecx
        mov dword ptr [esi+0xc], edx
        call dword ptr [eax+0x34]
        test eax, eax
        je L5
        mov ecx, dword ptr [esi]
        push esi
        call dword ptr [ecx+0x40]
        pop edi
        pop esi
        mov eax, 0x80040258
        pop ebx
        ret 0x10
L5:
        mov edx, dword ptr [esi+0x28]
        mov eax, dword ptr [edi+0x10]
        push edx
        push eax
        push ebx
        push esi
        call FUN_1001e1b0
        mov edi, eax
        test edi, edi
        je L6
        mov ecx, dword ptr [esi]
        push esi
        call dword ptr [ecx+0x40]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0x10
L6:
        mov dword ptr [esi+8], 1
        mov esi, dword ptr [esi+0x14]
        push esi
        mov edx, dword ptr [esi]
        call dword ptr [edx+4]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0x10

        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn2 0x100195F0 ---- */
        push ebx
        push ebp
        mov ebp, dword ptr [esp+0x10]
        mov eax, offset g_100245a8
        push esi
        push edi
        mov edi, dword ptr [g_100210f4]
        test eax, eax
        je F2_1
        cmp word ptr [g_100245a8], 0
        je F2_1
        push eax
        call edi
        add esp, 4
        mov ecx, ebp
        shl eax, 1
        push eax
        push offset g_100245a8
        call FUN_100016b0
F2_1:
        mov ecx, dword ptr [esp+0x14]
        mov esi, dword ptr [ecx+0x2c]
        test esi, esi
        je F2_2
        cmp word ptr [esi], 0
        je F2_2
        push esi
        call edi
        add esp, 4
        mov ecx, ebp
        shl eax, 1
        push eax
        push esi
        call FUN_100016b0
F2_2:
        mov edx, dword ptr [esp+0x14]
        mov eax, offset g_100262d8
        test eax, eax
        mov ebx, dword ptr [edx+0xc]
        je F2_3
        cmp word ptr [g_100262d8], 0
        je F2_3
        push eax
        call edi
        add esp, 4
        mov ecx, ebp
        shl eax, 1
        push eax
        push offset g_100262d8
        call FUN_100016b0
F2_3:
        mov ecx, offset g_10026704
        test ecx, ecx
        je F2_4
        cmp word ptr [g_10026704], 0
        je F2_4
        push ecx
        call edi
        add esp, 4
        mov ecx, ebp
        shl eax, 1
        push eax
        push offset g_10026704
        call FUN_100016b0
F2_4:
        mov edx, offset g_100262d0
        test edx, edx
        je F2_5
        cmp word ptr [g_100262d0], 0
        je F2_5
        push edx
        call edi
        add esp, 4
        mov ecx, ebp
        shl eax, 1
        push eax
        push offset g_100262d0
        call FUN_100016b0
F2_5:
        push ebx
        lea esi, [ebp+0x18]
        push offset g_10026250
        push 0x40
        push esi
        call dword ptr [g_10021100]
        add esp, 0x10
        mov ecx, ebp
        shl eax, 1
        push eax
        push esi
        call FUN_100016b0
        mov eax, offset g_100262cc
        test eax, eax
        je F2_6
        cmp word ptr [g_100262cc], 0
        je F2_6
        push eax
        call edi
        add esp, 4
        mov ecx, ebp
        shl eax, 1
        push eax
        push offset g_100262cc
        call FUN_100016b0
F2_6:
        mov eax, dword ptr [esp+0x14]
        push ebp
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx+0x30]
        mov edx, offset g_100262c4
        test edx, edx
        je F2_7
        cmp word ptr [g_100262c4], 0
        je F2_7
        push edx
        call edi
        mov esi, eax
        add esp, 4
        shl esi, 1
        mov dword ptr [esp+0x14], esi
        je F2_7
        mov eax, dword ptr [ebp+0xc]
        mov ecx, dword ptr [ebp+0x10]
        lea eax, [eax+esi+2]
        cmp eax, ecx
        jbe F2_8
        mov ecx, dword ptr [ebp+0x14]
        add eax, ecx
        push eax
        mov dword ptr [ebp+0x10], eax
        call dword ptr [g_100210f8]
        mov ebx, eax
        xor edi, edi
        add esp, 4
        cmp ebx, edi
        jne F2_9
        cmp dword ptr [ebp+0xc], edi
        jbe F2_10
        mov eax, dword ptr [ebp]
        cmp eax, edi
        je F2_10
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
F2_10:
        mov dword ptr [ebp], edi
        mov dword ptr [ebp+0x10], edi
        mov dword ptr [ebp+0xc], edi
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
F2_9:
        mov ecx, dword ptr [ebp+0xc]
        cmp ecx, edi
        jbe F2_11
        mov esi, dword ptr [ebp]
        mov edx, ecx
        mov edi, ebx
        xor eax, eax
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edx, dword ptr [ebp+0xc]
        mov ecx, dword ptr [ebp+0x10]
        sub ecx, edx
        lea edi, [edx+ebx]
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr [ebp]
        push eax
        call dword ptr [g_100210ec]
        mov esi, dword ptr [esp+0x18]
        add esp, 4
F2_11:
        mov dword ptr [ebp], ebx
F2_8:
        mov edi, dword ptr [ebp+0xc]
        mov eax, dword ptr [ebp]
        mov ecx, esi
        mov esi, offset g_100262c4
        mov edx, ecx
        add edi, eax
        shr ecx, 2
        rep movsd
        mov eax, dword ptr [esp+0x14]
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [ebp+0xc]
        add ecx, eax
        mov dword ptr [ebp+0xc], ecx
        mov eax, ecx
        mov ecx, dword ptr [ebp]
        mov byte ptr [eax+ecx], 0
        mov edx, dword ptr [ebp+0xc]
        mov eax, dword ptr [ebp]
        mov byte ptr [edx+eax+1], 0
F2_7:
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

        /* ---- fn3 0x10019830 ---- */
        mov eax, dword ptr [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        push 0x34
        push eax
        call dword ptr [g_10021064]
        test eax, eax
        je F3_1
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        ret 8
F3_1:
        mov ebx, dword ptr [esp+0x14]
        mov eax, dword ptr [ebx+0x1c]
        test eax, eax
        jne F3_2
        lea ecx, [esp+0x14]
        lea ebp, [ebx-0x1c]
        push ecx
        push ebp
        call FUN_1001e380
        test eax, eax
        jl F3_3
        lea esi, [ebx+4]
        push 7
        mov ecx, esi
        call FUN_100067c0
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov eax, dword ptr [esp+0x14]
        push eax
        call dword ptr [edx+8]
        test eax, eax
        jl F3_3
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx]
        mov ecx, dword ptr [ebx+0x14]
        mov edx, dword ptr [eax]
        push 1
        push ecx
        mov ecx, eax
        call dword ptr [edx+0x1c]
        mov esi, eax
        test esi, esi
        jne F3_4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040285
        pop ebx
        ret 8
F3_4:
        push 0x34
        call FUN_1000a0f0
        mov edi, eax
        test edi, edi
        mov dword ptr [ebx+0x1c], edi
        jne F3_5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040259
        pop ebx
        ret 8
F3_5:
        mov ecx, 0xd
        xor eax, eax
        rep stosd
        mov edx, dword ptr [ebp]
        push esi
        push ebp
        call dword ptr [edx+0x38]
        mov esi, eax
        test esi, esi
        jge F3_2
        mov eax, dword ptr [ebx+0x1c]
        push eax
        call FUN_1000a0e0
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr [ebx+0x1c], 0
        pop ebp
        pop ebx
        ret 8
F3_2:
        mov esi, dword ptr [ebx+0x1c]
        mov edi, dword ptr [esp+0x18]
        mov ecx, 0xd
        xor eax, eax
        rep movsd
F3_3:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8

        nop
        nop
    }
}
