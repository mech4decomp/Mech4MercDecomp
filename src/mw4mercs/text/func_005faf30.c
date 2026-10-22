/* FUN_005faf30 - __thiscall debug/log: prints mech stats (tonnage, battle value,
   trade value, heat, coolant, position, torso) via a log subsystem.
   Uses sprintf (function ptr @0x76b420) and a string-append helper FUN_005cbd00. */

extern void __cdecl FUN_005ddac0(void);
extern char __cdecl FUN_0061c1a0(void);
extern float __cdecl FUN_005fb8e0(void);
extern void __cdecl FUN_005cbd00(void);
extern int  __cdecl FUN_004d5990(void);
extern int  __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_005dda40(void);
extern void __cdecl FUN_005cbe50(void);
extern void __cdecl FUN_005cb3d0(void);

extern float g_76d598;
extern void *g_76b420;      /* sprintf function pointer */
extern int   g_7dab44;
extern int   g_7dab40;
extern float g_76c5b0;
extern float g_76d048;

extern char g_78acd8[];
extern char g_78accc[];
extern char g_78acc4[];     /* " (DEAD)" */
extern char g_78acb0[];     /* "\nTARGETMATERIAL: " */
extern char g_78acac[];     /* "%s\n" */
extern char g_78aca0[];     /* "\nTONNAGE: " */
extern char g_78ac90[];     /* "\nBATTLEVALUE: " */
extern char g_78ac80[];     /* "\nTRADE VALUE: " */
extern char g_78ac78[];     /* "\nHEAT: " */
extern char g_78ac74[];     /* "NA" */
extern char g_78ac68[];     /* "\nCOOLANT: " */
extern char g_78ac58[];     /* "\nPOSITION: x=" */
extern char g_77a078[];     /* ", z=" */
extern char g_78ac50[];     /* "\n" */
extern char g_78ac44[];     /* "Torso: y=" */
extern char g_78ac34[];     /* "%.2f p=%.2f\n" */
extern char g_78ac18[];     /* "Target Desirability: %d\n" */
extern char g_76b9a8[];     /* "%d" */
extern char g_788524[];     /* "%.1f" */
extern char g_76d82c[];     /* "%f" */

__declspec(naked) void func_005faf30(void)
{
    __asm {
        sub esp, 0x98
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0xa8]
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x2c]
        push edi
        push eax
        mov ecx, esi
        call FUN_005ddac0
        call FUN_0061c1a0
        cmp al, 0x1
        jnz L_5faf6c
        cmp byte ptr [ebx + 0xdc], 0x1
        jnz L_5faf6c
        push offset g_78acd8
        mov ecx, esi
        call FUN_005ddac0
L_5faf6c:
        mov ecx, ebx
        call FUN_005fb8e0
        fcomp dword ptr [g_76d598]
        __emit 0xDF          /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz L_5faf8c
        push offset g_78accc
        mov ecx, esi
        call FUN_005ddac0
L_5faf8c:
        mov ecx, dword ptr [ebx + 0x10]
        shr ecx, 0x13
        and cl, 0x1
        cmp cl, 0x1
        jnz L_5fafc1
        mov edx, dword ptr [esp + 0x10]
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_78acc4
        repne scasb
        not ecx
        dec ecx
        push edx
        add ecx, offset g_78acc4
        push ecx
        push offset g_78acc4
        mov ecx, esi
        call FUN_005cbd00
L_5fafc1:
        mov al, byte ptr [ebx + 0xdc]
        test al, al
        mov ebp, dword ptr [g_76b420]
        jz L_5fb073
        mov eax, dword ptr [g_7dab44]
        mov edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax]
        xor ecx, edx
        mov edx, dword ptr [ecx + 0x2c]
        xor edx, 0x85739531
        jz L_5fb073
        mov eax, dword ptr [esp + 0x10]
        or ecx, 0xffffffff
        push eax
        xor eax, eax
        mov edi, offset g_78acb0
        repne scasb
        not ecx
        dec ecx
        add ecx, offset g_78acb0
        push ecx
        push offset g_78acb0
        mov ecx, esi
        call FUN_005cbd00
        mov ecx, dword ptr [g_7dab44]
        mov eax, dword ptr [ecx]
        xor eax, dword ptr [g_7dab40]
        mov edx, dword ptr [eax + 0x2c]
        xor eax, eax
        xor edx, 0x85739531
        mov al, byte ptr [edx + 0x2a4]
        push eax
        call FUN_004d5990
        push eax
        lea ecx, [esp + 0x2c]
        push offset g_78acac
        push ecx
        call ebp
        mov edx, dword ptr [esp + 0x20]
        or ecx, 0xffffffff
        add esp, 0x10
        xor eax, eax
        lea edi, [esp + 0x24]
        repne scasb
        not ecx
        dec ecx
        lea eax, [esp + ecx + 0x24]
        push edx
        push eax
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, esi
        call FUN_005cbd00
L_5fb073:
        mov edx, dword ptr [esp + 0x10]
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_78aca0
        repne scasb
        not ecx
        dec ecx
        push edx
        add ecx, offset g_78aca0
        push ecx
        push offset g_78aca0
        mov ecx, esi
        call FUN_005cbd00
        fld dword ptr [ebx + 0x3b8]
        call FUN_0075db4a
        push eax
        lea eax, [esp + 0x28]
        push offset g_76b9a8
        push eax
        call ebp
        mov ecx, dword ptr [esp + 0x1c]
        add esp, 0xc
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        lea edi, [esp + 0x28]
        repne scasb
        not ecx
        dec ecx
        lea edx, [esp + ecx + 0x28]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, esi
        call FUN_005cbd00
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_78ac90
        repne scasb
        not ecx
        dec ecx
        add ecx, offset g_78ac90
        push ecx
        push offset g_78ac90
        mov ecx, esi
        call FUN_005cbd00
        mov edx, dword ptr [ebx + 0x3bc]
        push edx
        lea eax, [esp + 0x28]
        push offset g_76b9a8
        push eax
        call ebp
        mov ecx, dword ptr [esp + 0x1c]
        add esp, 0xc
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        lea edi, [esp + 0x28]
        repne scasb
        not ecx
        dec ecx
        lea edx, [esp + ecx + 0x28]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, esi
        call FUN_005cbd00
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_78ac80
        repne scasb
        not ecx
        dec ecx
        add ecx, offset g_78ac80
        push ecx
        push offset g_78ac80
        mov ecx, esi
        call FUN_005cbd00
        mov edx, dword ptr [ebx + 0x3c0]
        push edx
        lea eax, [esp + 0x28]
        push offset g_76b9a8
        push eax
        call ebp
        mov ecx, dword ptr [esp + 0x1c]
        add esp, 0xc
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        lea edi, [esp + 0x28]
        repne scasb
        not ecx
        dec ecx
        lea edx, [esp + ecx + 0x28]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, esi
        call FUN_005cbd00
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_78ac78
        repne scasb
        not ecx
        dec ecx
        add ecx, offset g_78ac78
        push ecx
        push offset g_78ac78
        mov ecx, esi
        call FUN_005cbd00
        mov eax, dword ptr [ebx + 0x408]
        test eax, eax
        jz L_5fb1e6
        fld dword ptr [eax + 0x4c]
        sub esp, 0x8
        fstp qword ptr [esp]
        lea edx, [esp + 0x2c]
        push offset g_76d82c
        push edx
        call ebp
        add esp, 0x10
        jmp L_5fb1f5
L_5fb1e6:
        lea eax, [esp + 0x24]
        push offset g_78ac74
        push eax
        call ebp
        add esp, 0x8
L_5fb1f5:
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        lea edi, [esp + 0x28]
        repne scasb
        not ecx
        dec ecx
        lea edx, [esp + ecx + 0x28]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, esi
        call FUN_005cbd00
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_78ac68
        repne scasb
        not ecx
        dec ecx
        add ecx, offset g_78ac68
        push ecx
        push offset g_78ac68
        mov ecx, esi
        call FUN_005cbd00
        mov eax, dword ptr [ebx + 0x408]
        test eax, eax
        jz L_5fb264
        fld dword ptr [eax + 0x54]
        sub esp, 0x8
        fstp qword ptr [esp]
        lea edx, [esp + 0x2c]
        push offset g_76d82c
        push edx
        call ebp
        add esp, 0x10
        jmp L_5fb273
L_5fb264:
        lea eax, [esp + 0x24]
        push offset g_78ac74
        push eax
        call ebp
        add esp, 0x8
L_5fb273:
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        lea edi, [esp + 0x28]
        repne scasb
        not ecx
        dec ecx
        lea edx, [esp + ecx + 0x28]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, esi
        call FUN_005cbd00
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_78ac58
        repne scasb
        not ecx
        dec ecx
        add ecx, offset g_78ac58
        push ecx
        push offset g_78ac58
        mov ecx, esi
        call FUN_005cbd00
        mov edx, dword ptr [ebx + 0xd8]
        add edx, 0x80
        push edx
        lea ecx, [esp + 0x78]
        call FUN_00419480
        fld dword ptr [esp + 0x74]
        sub esp, 0x8
        fstp qword ptr [esp]
        lea eax, [esp + 0x88]
        push offset g_788524
        push eax
        call ebp
        add esp, 0x10
        lea ecx, [esp + 0x17]
        push ecx
        lea edx, [esp + 0x84]
        push edx
        lea ecx, [esp + 0x20]
        call FUN_005dda40
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call FUN_005cbe50
        lea ecx, [esp + 0x18]
        call FUN_005cb3d0
        mov eax, dword ptr [esp + 0x10]
        or ecx, 0xffffffff
        push eax
        xor eax, eax
        mov edi, offset g_78ac50
        repne scasb
        not ecx
        dec ecx
        add ecx, offset g_78ac50
        push ecx
        push offset g_78ac50
        mov ecx, esi
        call FUN_005cbd00
        sub esp, 0x8
        fld dword ptr [esp + 0x84]
        fstp qword ptr [esp]
        lea ecx, [esp + 0x88]
        push offset g_788524
        push ecx
        call ebp
        add esp, 0x10
        lea edx, [esp + 0x17]
        push edx
        lea eax, [esp + 0x84]
        push eax
        lea ecx, [esp + 0x20]
        call FUN_005dda40
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x18]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call FUN_005cbe50
        lea ecx, [esp + 0x18]
        call FUN_005cb3d0
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_77a078
        repne scasb
        not ecx
        dec ecx
        add ecx, offset g_77a078
        push ecx
        push offset g_77a078
        mov ecx, esi
        call FUN_005cbd00
        mov edx, dword ptr [ebx + 0x410]
        mov ecx, dword ptr [ebx + 0x40c]
        sub edx, ecx
        sar edx, 0x2
        jz L_5fb491
        mov eax, ecx
        cmp dword ptr [eax], 0x0
        jz L_5fb491
        mov eax, dword ptr [esp + 0x10]
        or ecx, 0xffffffff
        push eax
        xor eax, eax
        mov edi, offset g_78ac44
        repne scasb
        not ecx
        dec ecx
        add ecx, offset g_78ac44
        push ecx
        push offset g_78ac44
        mov ecx, esi
        call FUN_005cbd00
        mov ecx, dword ptr [ebx + 0x410]
        mov edx, dword ptr [ebx + 0x40c]
        sub ecx, edx
        sar ecx, 0x2
        jz L_5fb429
        mov eax, edx
        mov ecx, dword ptr [eax]
        jmp L_5fb42b
L_5fb429:
        xor ecx, ecx
L_5fb42b:
        mov edx, dword ptr [ebx + 0x410]
        mov edi, dword ptr [ebx + 0x40c]
        sub edx, edi
        sar edx, 0x2
        jz L_5fb444
        mov eax, edi
        mov eax, dword ptr [eax]
        jmp L_5fb446
L_5fb444:
        xor eax, eax
L_5fb446:
        fld dword ptr [ecx + 0x19c]
        sub esp, 0x8
        fstp qword ptr [esp]
        sub esp, 0x8
        fld dword ptr [eax + 0x198]
        lea eax, [esp + 0x34]
        fstp qword ptr [esp]
        push offset g_78ac34
        push eax
        call ebp
        mov ecx, dword ptr [esp + 0x28]
        add esp, 0x18
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        lea edi, [esp + 0x28]
        repne scasb
        not ecx
        dec ecx
        lea edx, [esp + ecx + 0x28]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, esi
        call FUN_005cbd00
L_5fb491:
        mov ecx, ebx
        call FUN_005fb8e0
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF          /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz L_5fb4eb
        mov ecx, ebx
        call FUN_005fb8e0
        fmul dword ptr [g_76d048]
        call FUN_0075db4a
        push eax
        lea ecx, [esp + 0x28]
        push offset g_78ac18
        push ecx
        call ebp
        mov edx, dword ptr [esp + 0x1c]
        or ecx, 0xffffffff
        add esp, 0xc
        xor eax, eax
        lea edi, [esp + 0x24]
        repne scasb
        not ecx
        dec ecx
        lea eax, [esp + ecx + 0x24]
        push edx
        push eax
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, esi
        call FUN_005cbd00
L_5fb4eb:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x98
        ret 0x4
    }
}
