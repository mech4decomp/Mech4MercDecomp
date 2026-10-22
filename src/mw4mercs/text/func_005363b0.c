// FUN_005363B0 (328 bytes)
// __thiscall, RET 0x4
// Game rendering/setup function with FPU math and jump table
__declspec(naked) void func_005363b0(void)
{
    

/* extern data/function symbols for __emit replacements */
extern void __cdecl FUN_0061c159(void);
extern void __cdecl FUN_00548f0c(void);
extern void __cdecl FUN_00548efc(void);
extern int DAT_0077a19c;
extern int DAT_0077a198;
extern void __cdecl FUN_00709cd1(void);
extern int DAT_00770120;
extern void __cdecl FUN_0075dacd(void);
extern void __cdecl FUN_00709c1d(void);
extern int DAT_0077a194;
extern void __cdecl FUN_0075dab9(void);
extern void __cdecl FUN_00709c59(void);
extern int DAT_007b431c;
extern int DAT_007b4320;
extern int DAT_0077a1a0;
extern int DAT_007b435c;
extern int DAT_007b4358;
__asm {
push    esi
        mov     esi, dword ptr [esp + 0x08]
        push    edi
        mov     edi, ecx
        mov     cl, byte ptr [edi + 0x17]
        test    cl, cl
        mov     eax, dword ptr [edi + 0x50]
        jnz     skip_init
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [esi + 0x1c]
        mov     dword ptr [eax + 0x2c], ecx
        mov     ecx, dword ptr [esi + 0x28]
        mov     dword ptr [eax + 0x48], ecx
        mov     ecx, dword ptr [esi + 0x24]
        mov     dword ptr [eax + 0x50], edx
        lea     ecx, [ecx + ecx*0x4]
        lea     edx, [ecx + ecx*0x4]
        shl     edx, 0x02
        mov     dword ptr [eax + 0x54], edx
        mov     edx, dword ptr [esi + 0x20]
        test    edx, edx
        setnz   al
        push    eax
        call FUN_0061c159
        add     esp, 0x04

skip_init:
        push    ebx
        mov     ebx, dword ptr [esi + 0x2c]
        push    ebx
        call FUN_00548f0c
        add     esp, 0x04
        cmp     ebx, 0x01
        pop     ebx
        jnz     skip_extra
        push    0x03
        call FUN_00548efc
        add     esp, 0x04

skip_extra:
        fld     dword ptr [esi + 0x3c]
        push    ecx
        fmul dword ptr [DAT_0077a19c]
        fadd dword ptr [DAT_0077a198]
        fstp    dword ptr [esp]
        call FUN_00709cd1
        fld     dword ptr [esi + 0x38]
        fmul dword ptr [DAT_00770120]
        call FUN_0075dacd
        push    eax
        call FUN_00709c1d
        fld     dword ptr [esi + 0x34]
        fmul dword ptr [DAT_0077a194]
        call FUN_0075dab9
        push    eax
        call FUN_00709c59
        mov     eax, dword ptr [esi + 0x30]
        cmp     eax, 0x04
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [edi + 0x3508], ecx
        ja      switch_done
        /* __emit: jump table jmp dword ptr [eax*4+0x005364F8] - SIB with absolute base, un-encodable */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0xF8
        __emit 0x64
        __emit 0x53
        __emit 0x00

        // case 0: 0x00536469
        mov dword ptr [DAT_007b431c], 0x640
        mov dword ptr [DAT_007b4320], 0x4b0
        jmp     switch_done

        // case 1: 0x0053647F
        mov dword ptr [DAT_007b431c], 0x500
        mov dword ptr [DAT_007b4320], 0x400
        jmp     switch_done

        // case 2: 0x00536495
        mov dword ptr [DAT_007b431c], 0x400
        mov dword ptr [DAT_007b4320], 0x300
        jmp     switch_done

        // case 3: 0x005364AB
        mov dword ptr [DAT_007b431c], 0x320
        mov dword ptr [DAT_007b4320], 0x258
        jmp     switch_done

        // case 4: 0x005364C1
        mov dword ptr [DAT_007b431c], 0x280
        mov dword ptr [DAT_007b4320], 0x1e0

switch_done:
        fild    dword ptr [esi + 0x40]
        pop     edi
        fmul dword ptr [DAT_0077a1a0]
        fstp dword ptr [DAT_007b435c]
        fild    dword ptr [esi + 0x44]
        pop     esi
        fmul dword ptr [DAT_0077a1a0]
        fstp dword ptr [DAT_007b4358]
        ret     0x04
    }


}
