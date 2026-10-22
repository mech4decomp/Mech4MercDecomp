/* MW4Stats.dll — gap region 0x1000CE4A..0x1000DCE0 (3734 B)
 * Contains 3 SEH-wrapped functions plus NOP padding:
 *   fn1 0x1000CE50 (SEH COM method, ret 8)
 *   fn2 0x1000D6B0 (SEH COM method, ret 8)
 *   fn3 0x1000DA20 (SEH COM method, ret 8)
 * Transcribed as a single naked body covering the whole declared range.
 */

extern void* g_10021060;
extern void* g_1002105c;
extern void* g_10021098;
extern void* g_10021138;
extern void* g_100210f4;
extern void* g_100210ec;
extern void* g_100210f8;

extern unsigned short g_10026384;
extern unsigned short g_100274ec;
extern unsigned short g_10026378;
extern unsigned short g_1002636c;
extern unsigned short g_10026250;
extern unsigned short g_10026360;
extern unsigned short g_10026354;
extern unsigned short g_10026348;
extern unsigned short g_10026338;
extern unsigned short g_100252e8;
extern unsigned short g_1002632c;
extern unsigned short g_1002631c;
extern unsigned short g_100245a0;
extern unsigned short g_10026310;
extern unsigned short g_100262dc;
extern unsigned short g_10026304;
extern unsigned short g_100263ac;
extern unsigned short g_100263a0;
extern unsigned short g_10026394;
extern unsigned short g_100263c8;
extern unsigned short g_100263bc;

extern void __cdecl FUN_1001fa41(void);
extern void __cdecl FUN_1001fa66(void);
extern void __cdecl FUN_1001fa86(void);
extern void __cdecl FUN_1000b7d0(void);
extern void __cdecl FUN_10006740(void);
extern void __cdecl FUN_10006840(void);
extern void __cdecl FUN_1000b7b0(void);
extern void __cdecl FUN_100067d0(void);
extern void __cdecl FUN_1000b850(void);
extern void __cdecl FUN_1000cd70(void);
extern void __cdecl FUN_1000cd30(void);
extern void __cdecl FUN_1000b6e0(void);
extern void __cdecl FUN_1000f1b0(void);
extern void __cdecl FUN_100016b0(void);

__declspec(naked) void FUN_1000ce4a(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn1 0x1000CE50 ---- */
        mov eax, dword ptr fs:[0]
        push -1
        push offset FUN_1001fa41
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2b8
        push ebx
        push ebp
        mov ebp, dword ptr [esp+0x2d0]
        push esi
        push edi
        mov eax, dword ptr [ebp+8]
        test eax, eax
        je L1_1
        mov eax, dword ptr [ebp+0x3c]
        test eax, eax
        je L1_1
        mov eax, dword ptr [ebp+0x40]
        test eax, eax
        je L1_2
        mov eax, 0x80040240
        jmp L1_END
L1_2:
        mov ebx, dword ptr [esp+0x2dc]
        push 0x14
        push ebx
        call dword ptr [g_10021060]
        test eax, eax
        jne L1_ERR
        cmp dword ptr [ebx], 0x14
        jne L1_ERR
        mov eax, dword ptr [ebx+4]
        mov edi, dword ptr [g_1002105c]
        push -1
        push eax
        call edi
        test eax, eax
        jne L1_ERR
        mov ecx, dword ptr [ebx+4]
        push ecx
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        je L1_ERR
        mov edx, dword ptr [ebx+8]
        push -1
        push edx
        call edi
        test eax, eax
        jne L1_ERR
        mov eax, dword ptr [ebx+8]
        push eax
        call FUN_1000b7d0
        add esp, 4
        test eax, eax
        je L1_ERR
        mov eax, dword ptr [ebx+0x10]
        test eax, eax
        je L1_3
        cmp word ptr [eax], 0
        je L1_3
        push 3
        lea ecx, [esp+0x14]
        call FUN_10006740
        mov ecx, dword ptr [ebx+0x10]
        mov dword ptr [esp+0x2d0], 0
        push ecx
        lea ecx, [esp+0x14]
        call FUN_10006840
        mov esi, eax
        test esi, esi
        jge L1_4
        mov edx, dword ptr [ebp+8]
        push 3
        mov eax, dword ptr [edx+0x10]
        push eax
        call FUN_1000b7b0
        add esp, 8
        lea ecx, [esp+0x10]
        mov dword ptr [esp+0x2d0], 0xffffffff
        call FUN_100067d0
        mov eax, esi
        jmp L1_END
L1_4:
        lea ecx, [esp+0x10]
        mov dword ptr [esp+0x2d0], 0xffffffff
        call FUN_100067d0
L1_3:
        mov ecx, dword ptr [ebx+4]
        lea esi, [ebp+0x214]
        push esi
        push ecx
        call FUN_1000b850
        add esp, 8
        test al, al
        je L1_5
        mov eax, dword ptr [ebp+0x220]
        test eax, eax
        je L1_5
        mov edx, dword ptr [ebx+8]
        lea eax, [ebp+0x2ac]
        push eax
        push edx
        call FUN_1000b850
        add esp, 8
        test al, al
        je L1_6
        mov eax, dword ptr [ebp+0x2b8]
        test eax, eax
        je L1_6
        mov eax, dword ptr [ebx+0xc]
        push -1
        push eax
        call edi
        test eax, eax
        jne L1_7
        mov eax, dword ptr [ebx+0xc]
        test eax, eax
        je L1_7
        cmp word ptr [eax], 0
        je L1_7
        lea ecx, [ebp+0x17c]
        push ecx
        push eax
        call FUN_1000b850
        add esp, 8
        test al, al
        je L1_5
        mov eax, dword ptr [ebp+0x188]
        test eax, eax
        jne L1_7
L1_5:
        mov edx, dword ptr [ebp+8]
        push 3
        mov eax, dword ptr [edx+0x10]
        push eax
        call FUN_1000b7b0
        add esp, 8
        mov eax, 0x8007000e
        jmp L1_END
L1_7:
        mov edi, 1
        push edi
        push offset g_10026384
        push ebp
        call FUN_1000cd70
        test eax, eax
        je L1_8
        mov eax, dword ptr [esi+0xc]
        test eax, eax
        jbe L1_9
        mov eax, dword ptr [esi]
        jmp L1_10
L1_9:
        mov eax, offset g_100274ec
L1_10:
        push edi
        push eax
        push ebp
        call FUN_1000cd70
        test eax, eax
        jne L1_11
        mov eax, dword ptr [ebp+8]
        push 3
        mov ecx, dword ptr [eax+0x10]
        push ecx
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L1_END
L1_11:
        push edi
        push offset g_10026378
        push ebp
        call FUN_1000cd70
        test eax, eax
        jne L1_12
        mov edx, dword ptr [ebp+8]
        push 3
        mov eax, dword ptr [edx+0x10]
        push eax
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L1_END
L1_12:
        mov eax, dword ptr [ebp+0x2b8]
        xor esi, esi
        cmp eax, esi
        jbe L1_13
        mov eax, dword ptr [ebp+0x2ac]
        jmp L1_14
L1_13:
        mov eax, offset g_100274ec
L1_14:
        push edi
        push eax
        push ebp
        call FUN_1000cd70
        test eax, eax
        je L1_8
        push edi
        push offset g_1002636c
        push ebp
        call FUN_1000cd70
        test eax, eax
        jne L1_15
        mov eax, dword ptr [ebp+8]
        push 3
        mov ecx, dword ptr [eax+0x10]
        push ecx
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L1_END
L1_15:
        mov edx, dword ptr [ebp+0x2c]
        lea eax, [esp+0x1c8]
        push edx
        push offset g_10026250
        push eax
        call dword ptr [g_10021138]
        add esp, 0xc
        lea ecx, [esp+0x1c8]
        push edi
        push ecx
        push ebp
        call FUN_1000cd70
        test eax, eax
        jne L1_16
        mov edx, dword ptr [ebp+8]
        push 3
        mov eax, dword ptr [edx+0x10]
        push eax
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L1_END
L1_16:
        cmp dword ptr [ebp+0x188], esi
        je L1_17
        push edi
        push offset g_10026360
        push ebp
        call FUN_1000cd70
        test eax, eax
        je L1_8
        lea eax, [ebp+0x17c]
        push edi
        push eax
        push ebp
        call FUN_1000cd30
        test eax, eax
        je L1_8
L1_17:
        cmp dword ptr [ebp+0x350], esi
        je L1_18
        push edi
        push offset g_10026354
        push ebp
        call FUN_1000cd70
        test eax, eax
        jne L1_19
        mov eax, dword ptr [ebp+8]
        push 3
        mov ecx, dword ptr [eax+0x10]
        push ecx
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L1_END
L1_19:
        lea edx, [ebp+0x344]
        push edi
        push edx
        push ebp
        call FUN_1000cd30
        test eax, eax
        jne L1_18
        mov eax, dword ptr [ebp+8]
        push 3
        mov ecx, dword ptr [eax+0x10]
        push ecx
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L1_END
L1_18:
        cmp dword ptr [ebp+0x3e8], esi
        je L1_20
        push edi
        push offset g_10026348
        push ebp
        call FUN_1000cd70
        test eax, eax
        jne L1_21
        mov edx, dword ptr [ebp+8]
        push 3
        mov eax, dword ptr [edx+0x10]
        push eax
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L1_END
L1_21:
        lea ecx, [ebp+0x3dc]
        push edi
        push ecx
        push ebp
        call FUN_1000cd30
        test eax, eax
        jne L1_20
        mov edx, dword ptr [ebp+8]
        push 3
        mov eax, dword ptr [edx+0x10]
        push eax
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L1_END
L1_20:
        lea ecx, [esp+0x1c8]
        lea edx, [ebp+0x1c]
        push ecx
        push edx
        call FUN_1000b6e0
        add esp, 8
        push edi
        push offset g_10026338
        push ebp
        call FUN_1000cd70
        test eax, eax
        jne L1_22
        mov eax, dword ptr [ebp+8]
        push 3
        mov ecx, dword ptr [eax+0x10]
        push ecx
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L1_END
L1_22:
        lea edx, [esp+0x1c8]
        push edi
        push edx
        push ebp
        call FUN_1000cd70
        test eax, eax
        jne L1_23
        mov eax, dword ptr [ebp+8]
        push 3
        mov ecx, dword ptr [eax+0x10]
        push ecx
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L1_END
L1_23:
        push edi
        push offset g_100252e8
        push ebp
        call FUN_1000cd70
        test eax, eax
        jne L1_24
        mov edx, dword ptr [ebp+8]
        push 3
        mov eax, dword ptr [edx+0x10]
        push eax
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L1_END
L1_24:
        mov eax, dword ptr [ebx+0x10]
        cmp eax, esi
        je L1_25
        cmp word ptr [eax], si
        je L1_25
        push edi
        push eax
        push ebp
        call FUN_1000cd70
        test eax, eax
        je L1_8
L1_25:
        push edi
        push offset g_1002632c
        push ebp
        call FUN_1000cd70
        test eax, eax
        je L1_26
        mov ecx, dword ptr [ebp+0x48]
        lea edx, [esp+0x148]
        push edx
        call FUN_1000f1b0
        push edi
        push offset g_1002631c
        push ebp
        call FUN_1000cd70
        test eax, eax
        je L1_26
        lea edx, [esp+0x148]
        push edi
        push edx
        push ebp
        call FUN_1000cd70
        test eax, eax
        jne L1_27
L1_26:
        mov eax, dword ptr [ebp+8]
        push 3
        mov ecx, dword ptr [eax+0x10]
        push ecx
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L1_END
L1_27:
        push edi
        push offset g_100245a0
        push ebp
        call FUN_1000cd70
        test eax, eax
        jne L1_28
        mov edx, dword ptr [ebp+8]
        push 3
        mov eax, dword ptr [edx+0x10]
        push eax
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L1_END
L1_28:
        push edi
        push offset g_10026310
        push ebp
        call FUN_1000cd70
        test eax, eax
        jne L1_29
L1_8:
        mov ecx, dword ptr [ebp+8]
        push 3
        mov edx, dword ptr [ecx+0x10]
        push edx
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L1_END
L1_29:
        mov ecx, dword ptr [ebp+0x3c]
        mov edx, dword ptr [ebp+0x44]
        mov dword ptr [ebp+0x40], edi
        push edx
        mov eax, dword ptr [ecx]
        call dword ptr [eax+0x24]
        test eax, eax
        jne L1_30
        mov eax, 0x80040220
        jmp L1_END
L1_30:
        mov dword ptr [ebp+0x44], esi
        mov dword ptr [esp+0xb4], esi
        mov dword ptr [esp+0xb8], esi
        mov esi, 0x400
        mov dword ptr [esp+0xc4], esi
        mov eax, dword ptr [ebp+0x58]
        mov dword ptr [esp+0x2d0], edi
        xor edi, edi
        cmp eax, edi
        mov dword ptr [esp+0xb0], edi
        mov dword ptr [esp+0xc0], edi
        mov dword ptr [esp+0xbc], edi
        jbe L1_31
        mov ecx, dword ptr [ebp+0x4c]
        push eax
        push ecx
        lea ecx, [esp+0xb8]
        call FUN_100016b0
L1_31:
        mov ebx, dword ptr [g_100210f4]
        mov eax, offset g_100262dc
        test eax, eax
        je L1_32
        cmp word ptr [g_100262dc], di
        je L1_32
        push eax
        call ebx
        add esp, 4
        lea ecx, [esp+0xb0]
        shl eax, 1
        push eax
        push offset g_100262dc
        call FUN_100016b0
L1_32:
        mov dword ptr [esp+0x1c], edi
        mov dword ptr [esp+0x20], edi
        mov dword ptr [esp+0x2c], esi
        mov eax, dword ptr [ebp+0x58]
        mov byte ptr [esp+0x2d0], 2
        cmp eax, edi
        mov dword ptr [esp+0x18], edi
        mov dword ptr [esp+0x28], edi
        mov dword ptr [esp+0x24], edi
        jbe L1_33
        mov ecx, dword ptr [ebp+0x4c]
        push eax
        push ecx
        lea ecx, [esp+0x20]
        call FUN_100016b0
L1_33:
        mov esi, dword ptr [g_100210ec]
        mov edx, offset g_10026304
        test edx, edx
        je L1_34
        cmp word ptr [g_10026304], di
        je L1_34
        push edx
        call ebx
        mov ebx, eax
        add esp, 4
        shl ebx, 1
        je L1_34
        mov edx, dword ptr [esp+0x24]
        mov ecx, dword ptr [esp+0x28]
        lea eax, [edx+ebx+2]
        cmp eax, ecx
        jbe L1_35
        mov ecx, dword ptr [esp+0x2c]
        add eax, ecx
        push eax
        mov dword ptr [esp+0x2c], eax
        call dword ptr [g_100210f8]
        add esp, 4
        cmp eax, edi
        mov dword ptr [esp+0x10], eax
        jne L1_36
        cmp dword ptr [esp+0x24], edi
        jbe L1_37
        mov eax, dword ptr [esp+0x18]
        cmp eax, edi
        je L1_37
        push eax
        call esi
        add esp, 4
L1_37:
        mov dword ptr [esp+0x18], edi
        mov dword ptr [esp+0x28], edi
        mov dword ptr [esp+0x24], edi
        jmp L1_34
L1_36:
        mov edx, dword ptr [esp+0x24]
        cmp edx, edi
        jbe L1_38
        mov esi, dword ptr [esp+0x18]
        mov ecx, edx
        mov edx, dword ptr [esp+0x10]
        mov eax, ecx
        mov edi, edx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        xor eax, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [esp+0x28]
        mov esi, dword ptr [esp+0x24]
        sub ecx, esi
        lea edi, [esi+edx]
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr [esp+0x18]
        push eax
        call dword ptr [g_100210ec]
        mov edx, dword ptr [esp+0x28]
        mov eax, dword ptr [esp+0x14]
        add esp, 4
L1_38:
        mov dword ptr [esp+0x18], eax
L1_35:
        mov eax, dword ptr [esp+0x18]
        mov ecx, ebx
        mov esi, offset g_10026304
        lea edi, [edx+eax]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr [esp+0x24]
        mov ecx, dword ptr [esp+0x18]
        mov esi, dword ptr [g_100210ec]
        add eax, ebx
        mov dword ptr [esp+0x24], eax
        xor edi, edi
        mov byte ptr [eax+ecx], 0
        mov edx, dword ptr [esp+0x24]
        mov eax, dword ptr [esp+0x18]
        mov byte ptr [edx+eax+1], 0
L1_34:
        mov eax, dword ptr [esp+0x24]
        mov ecx, dword ptr [esp+0x18]
        cmp eax, edi
        ja L1_39
        mov ecx, offset g_100274ec
L1_39:
        mov eax, dword ptr [esp+0xbc]
        cmp eax, edi
        mov eax, dword ptr [esp+0xb0]
        ja L1_40
        mov eax, offset g_100274ec
L1_40:
        mov ebp, dword ptr [ebp+0x3c]
        push ecx
        push eax
        mov ecx, ebp
        mov edx, dword ptr [ebp]
        call dword ptr [edx+0x28]
        test eax, eax
        mov eax, dword ptr [esp+0x24]
        jne L1_41
        cmp eax, edi
        jbe L1_42
        mov eax, dword ptr [esp+0x18]
        cmp eax, edi
        je L1_42
        push eax
        call esi
        add esp, 4
L1_42:
        mov eax, dword ptr [esp+0xbc]
        mov dword ptr [esp+0x18], edi
        cmp eax, edi
        mov dword ptr [esp+0x28], edi
        mov dword ptr [esp+0x24], edi
        jbe L1_43
        mov eax, dword ptr [esp+0xb0]
        cmp eax, edi
        je L1_43
        push eax
        call esi
        add esp, 4
L1_43:
        mov eax, 0x80040250
        jmp L1_END
L1_41:
        cmp eax, edi
        jbe L1_44
        mov eax, dword ptr [esp+0x18]
        cmp eax, edi
        je L1_44
        push eax
        call esi
        add esp, 4
L1_44:
        mov eax, dword ptr [esp+0xbc]
        mov dword ptr [esp+0x18], edi
        cmp eax, edi
        mov dword ptr [esp+0x28], edi
        mov dword ptr [esp+0x24], edi
        jbe L1_45
        mov eax, dword ptr [esp+0xb0]
        cmp eax, edi
        je L1_45
        push eax
        call esi
        add esp, 4
L1_45:
        xor eax, eax
        jmp L1_END
L1_6:
        mov eax, dword ptr [ebp+8]
        push 3
        mov ecx, dword ptr [eax+0x10]
        push ecx
        call FUN_1000b7b0
        add esp, 8
        mov eax, 0x8007000e
        jmp L1_END
L1_ERR:
        mov ecx, dword ptr [ebp+8]
        push 3
        mov edx, dword ptr [ecx+0x10]
        push edx
        call FUN_1000b7b0
        add esp, 8
        mov eax, 0x80070057
        jmp L1_END
L1_1:
        mov eax, 0x80040290
L1_END:
        mov ecx, dword ptr [esp+0x2c8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x2c4
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
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn2 0x1000D6B0 ---- */
        mov eax, dword ptr fs:[0]
        push -1
        push offset FUN_1001fa66
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xa0
        push ebx
        push esi
        mov esi, dword ptr [esp+0xb8]
        push edi
        mov eax, dword ptr [esi+8]
        test eax, eax
        je L2_1
        mov eax, dword ptr [esi+0x3c]
        test eax, eax
        je L2_1
        mov eax, dword ptr [esi+0x40]
        test eax, eax
        je L2_2
        mov eax, 0x80040240
        jmp L2_END
L2_2:
        mov edi, dword ptr [esp+0xc0]
        push 0x14
        push edi
        call dword ptr [g_10021060]
        test eax, eax
        jne L2_ERR
        cmp dword ptr [edi], 0x14
        jne L2_ERR
        mov eax, dword ptr [edi+8]
        mov ebx, dword ptr [g_1002105c]
        push -1
        push eax
        call ebx
        test eax, eax
        jne L2_ERR
        mov ecx, dword ptr [edi+4]
        push -1
        push ecx
        call ebx
        test eax, eax
        jne L2_ERR
        mov eax, dword ptr [edi+0x10]
        xor ebx, ebx
        cmp eax, ebx
        je L2_3
        cmp word ptr [eax], bx
        je L2_3
        push 3
        lea ecx, [esp+0x10]
        call FUN_10006740
        mov edx, dword ptr [edi+0x10]
        lea ecx, [esp+0xc]
        push edx
        mov dword ptr [esp+0xb8], ebx
        call FUN_10006840
        mov ebx, eax
        test ebx, ebx
        jge L2_4
        mov eax, dword ptr [esi+8]
        push 3
        mov ecx, dword ptr [eax+0x10]
        push ecx
        call FUN_1000b7b0
        add esp, 8
        lea ecx, [esp+0xc]
        mov dword ptr [esp+0xb4], 0xffffffff
        call FUN_100067d0
        mov eax, ebx
        jmp L2_END
L2_4:
        lea ecx, [esp+0xc]
        mov dword ptr [esp+0xb4], 0xffffffff
        call FUN_100067d0
        xor ebx, ebx
L2_3:
        push 1
        push offset g_100263ac
        push esi
        call FUN_1000cd70
        test eax, eax
        je L2_5
        mov ecx, dword ptr [edi+8]
        push 1
        push ecx
        push esi
        call FUN_1000cd70
        test eax, eax
        jne L2_6
L2_5:
        mov edx, dword ptr [esi+8]
        push 3
        mov eax, dword ptr [edx+0x10]
        push eax
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        jmp L2_END
L2_6:
        mov dword ptr [esp+0x14], ebx
        mov dword ptr [esp+0x18], ebx
        mov dword ptr [esp+0x1c], ebx
        mov dword ptr [esp+0x20], ebx
        mov dword ptr [esp+0x24], ebx
        mov dword ptr [esp+0x28], 0x400
        mov edx, dword ptr [edi+4]
        lea ecx, [esp+0x14]
        push ecx
        push edx
        mov dword ptr [esp+0xbc], 1
        call FUN_1000b850
        add esp, 8
        test al, al
        mov eax, dword ptr [esp+0x20]
        je L2_7
        cmp eax, ebx
        je L2_8
        push 1
        push offset g_10026348
        push esi
        call FUN_1000cd70
        test eax, eax
        jne L2_9
        mov eax, dword ptr [esi+8]
        push 3
        mov ecx, dword ptr [eax+0x10]
        push ecx
        jmp L2_10
L2_9:
        lea edx, [esp+0x14]
        push 1
        push edx
        push esi
        call FUN_1000cd30
        test eax, eax
        jne L2_11
        mov eax, dword ptr [esi+8]
        push 3
        mov ecx, dword ptr [eax+0x10]
        push ecx
        jmp L2_10
L2_11:
        mov eax, dword ptr [edi+0xc]
        cmp eax, ebx
        je L2_12
        cmp word ptr [eax], bx
        je L2_12
        push 1
        push offset g_100263a0
        push esi
        call FUN_1000cd70
        test eax, eax
        je L2_13
        mov ecx, dword ptr [edi+0xc]
        push 1
        push ecx
        push esi
        call FUN_1000cd70
        test eax, eax
        je L2_13
L2_12:
        push 1
        push offset g_100252e8
        push esi
        call FUN_1000cd70
        test eax, eax
        jne L2_14
        mov ecx, dword ptr [esi+8]
        push 3
        mov edx, dword ptr [ecx+0x10]
        push edx
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        mov esi, eax
        mov eax, dword ptr [esp+0x20]
        cmp eax, ebx
        jbe L2_15
        mov eax, dword ptr [esp+0x14]
        cmp eax, ebx
        je L2_15
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
        mov eax, esi
        jmp L2_END
L2_14:
        mov edi, dword ptr [edi+0x10]
        cmp edi, ebx
        je L2_16
        cmp word ptr [edi], bx
        je L2_16
        push 1
        push edi
        push esi
        call FUN_1000cd70
        test eax, eax
        jne L2_16
        mov eax, dword ptr [esi+8]
        push 3
        mov ecx, dword ptr [eax+0x10]
        push ecx
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        mov esi, eax
        mov eax, dword ptr [esp+0x20]
        cmp eax, ebx
        jbe L2_15
        mov eax, dword ptr [esp+0x14]
        cmp eax, ebx
        je L2_15
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
        mov eax, esi
        jmp L2_END
L2_16:
        push 1
        push offset g_10026394
        push esi
        call FUN_1000cd70
        test eax, eax
        jne L2_17
L2_13:
        mov edx, dword ptr [esi+8]
        push 3
        mov eax, dword ptr [edx+0x10]
        push eax
L2_10:
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        mov esi, eax
        mov eax, dword ptr [esp+0x20]
        cmp eax, ebx
        jbe L2_15
        mov eax, dword ptr [esp+0x14]
        cmp eax, ebx
        je L2_15
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L2_15:
        mov eax, esi
        jmp L2_END
L2_17:
        cmp dword ptr [esp+0x20], ebx
        jbe L2_18
        mov eax, dword ptr [esp+0x14]
        cmp eax, ebx
        je L2_18
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L2_18:
        xor eax, eax
        jmp L2_END
L2_7:
        cmp eax, ebx
        jbe L2_8
        mov eax, dword ptr [esp+0x14]
        cmp eax, ebx
        je L2_8
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L2_8:
        mov eax, 0x8007000e
        jmp L2_END
L2_ERR:
        mov ecx, dword ptr [esi+8]
        push 3
        mov edx, dword ptr [ecx+0x10]
        push edx
        call FUN_1000b7b0
        add esp, 8
        mov eax, 0x80070057
        jmp L2_END
L2_1:
        mov eax, 0x80040290
L2_END:
        mov ecx, dword ptr [esp+0xac]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xac
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
        nop
        nop
        nop
        nop
        nop

        /* ---- fn3 0x1000DA20 ---- */
        mov eax, dword ptr fs:[0]
        push -1
        push offset FUN_1001fa86
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xa8
        push ebx
        push ebp
        mov ebp, dword ptr [esp+0xc0]
        push esi
        push edi
        mov eax, dword ptr [ebp+8]
        test eax, eax
        je L3_1
        mov eax, dword ptr [ebp+0x3c]
        test eax, eax
        je L3_1
        mov eax, dword ptr [ebp+0x40]
        test eax, eax
        je L3_2
        mov eax, 0x80040240
        jmp L3_END
L3_2:
        mov esi, dword ptr [esp+0xcc]
        push 0xc
        push esi
        call dword ptr [g_10021060]
        test eax, eax
        jne L3_ERR
        cmp dword ptr [esi], 0xc
        jne L3_ERR
        test byte ptr [esi+4], 2
        jne L3_3
        mov eax, dword ptr [esi+8]
        test eax, eax
        je L3_3
        cmp word ptr [eax], 0
        je L3_3
        push 3
        lea ecx, [esp+0x14]
        call FUN_10006740
        mov eax, dword ptr [esi+8]
        lea ecx, [esp+0x10]
        push eax
        mov dword ptr [esp+0xc4], 0
        call FUN_10006840
        mov edi, eax
        mov dword ptr [esp+0xc0], 0xffffffff
        test edi, edi
        lea ecx, [esp+0x10]
        jge L3_4
        call FUN_100067d0
        mov eax, edi
        jmp L3_END
L3_4:
        call FUN_100067d0
L3_3:
        mov ebx, dword ptr [esi+8]
        test ebx, ebx
        je L3_5
        cmp word ptr [ebx], 0
        je L3_5
        mov edi, dword ptr [esi+4]
        mov eax, 0
        not edi
        shr edi, 1
        and edi, 1
        mov dword ptr [esp+0x20], eax
        mov dword ptr [esp+0x18], edi
        mov dword ptr [esp+0x24], eax
        mov dword ptr [esp+0x28], eax
        mov dword ptr [esp+0x2c], eax
        mov dword ptr [esp+0x30], eax
        mov dword ptr [esp+0x34], 0x400
        mov dword ptr [esp+0xc0], 1
        jne L3_ELSE
        mov ecx, dword ptr [ebp+8]
        mov edx, dword ptr [ecx+0x10]
        push edx
        call dword ptr [g_100210f4]
        mov dword ptr [esp+0x14], eax
        mov eax, dword ptr [esi+8]
        push eax
        xor edi, edi
        xor ebx, ebx
        call dword ptr [g_100210f4]
        add esp, 8
        test eax, eax
        jbe L3_7
L3_8:
        mov eax, ebx
        mov ecx, dword ptr [ebp+8]
        cdq
        idiv dword ptr [esp+0x10]
        mov eax, dword ptr [esi+8]
        mov ecx, dword ptr [ecx+0x10]
        mov ax, word ptr [eax+edi*2]
        sub ax, word ptr [ecx+edx*2]
        add eax, 0x30
        inc ebx
        cmp ax, 0x30
        jae L3_9
        add eax, 0x4a
L3_9:
        lea ecx, [esp+0x1c]
        push 2
        push ecx
        lea ecx, [esp+0x28]
        mov dword ptr [esp+0x24], eax
        call FUN_100016b0
        mov edx, dword ptr [esi+8]
        inc edi
        push edx
        call dword ptr [g_100210f4]
        add esp, 4
        cmp edi, eax
        jb L3_8
L3_7:
        mov edi, dword ptr [esp+0x18]
L3_13:
        push edi
        push offset g_100263c8
        push ebp
        call FUN_1000cd70
        test eax, eax
        je L3_10
        lea edx, [esp+0x20]
        push edi
        push edx
        push ebp
        call FUN_1000cd30
        test eax, eax
        jne L3_11
L3_10:
        mov eax, dword ptr [ebp+8]
        push 3
        mov ecx, dword ptr [eax+0x10]
        push ecx
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        mov esi, eax
        mov eax, dword ptr [esp+0x2c]
        test eax, eax
        jbe L3_12
        mov eax, dword ptr [esp+0x20]
        test eax, eax
        je L3_12
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
        mov eax, esi
        jmp L3_END
L3_ELSE:
        cmp ebx, eax
        mov dword ptr [esp+0x20], eax
        mov dword ptr [esp+0x30], eax
        mov dword ptr [esp+0x2c], eax
        je L3_13
        cmp word ptr [ebx], ax
        je L3_13
        push ebx
        call dword ptr [g_100210f4]
        add esp, 4
        lea ecx, [esp+0x20]
        shl eax, 1
        push eax
        push ebx
        call FUN_100016b0
        jmp L3_13
L3_11:
        push edi
        push offset g_100263bc
        push ebp
        call FUN_1000cd70
        test eax, eax
        jne L3_14
        mov edx, dword ptr [ebp+8]
        push 3
        mov eax, dword ptr [edx+0x10]
        push eax
        call FUN_1000b7b0
        add esp, 8
        call dword ptr [g_10021098]
        mov esi, eax
        mov eax, dword ptr [esp+0x2c]
        test eax, eax
        jbe L3_12
        mov eax, dword ptr [esp+0x20]
        test eax, eax
        je L3_12
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L3_12:
        mov eax, esi
        jmp L3_END
L3_14:
        mov eax, dword ptr [esp+0x2c]
        test eax, eax
        jbe L3_5
        mov eax, dword ptr [esp+0x20]
        test eax, eax
        je L3_5
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L3_5:
        xor eax, eax
        jmp L3_END
L3_ERR:
        mov eax, 0x80070057
        jmp L3_END
L3_1:
        mov eax, 0x80040290
L3_END:
        mov ecx, dword ptr [esp+0xb8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xb4
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
        nop
        nop
        nop
        nop
    }
}
