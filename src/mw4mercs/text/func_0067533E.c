// 0x0067533E: in-.text data block transcription (344 bytes)
// Block = 2-byte NOP + 16-entry jump table (relocated dwords) + small
// dispatch function (0x675380) + NOP pad + main function (0x6753A0) that
// formats a float via IAT 0x76b424.

extern void __cdecl FUN_00677590(void);
extern void __cdecl FUN_006775b0(void);
extern float g_76c5b0;   // 0x76c5b0
extern void *g_76b424;   // IAT 0x76b424
extern char g_7976e8;    // 0x7976e8
extern char g_7976b4;    // 0x7976b4

__declspec(naked) void func_0067533E(void)
{
    __asm {
        // 2-byte NOP (alignment)
        mov edi, edi
        // jump table: 16 relocated dword entries (inline asm has no dd)
        __emit 0x37
        __emit 0x4E
        __emit 0x67
        __emit 0x00
        __emit 0x6E
        __emit 0x4E
        __emit 0x67
        __emit 0x00
        __emit 0xD7
        __emit 0x4E
        __emit 0x67
        __emit 0x00
        __emit 0x2A
        __emit 0x4F
        __emit 0x67
        __emit 0x00
        __emit 0x85
        __emit 0x4F
        __emit 0x67
        __emit 0x00
        __emit 0xB3
        __emit 0x4F
        __emit 0x67
        __emit 0x00
        __emit 0x0E
        __emit 0x50
        __emit 0x67
        __emit 0x00
        __emit 0x69
        __emit 0x50
        __emit 0x67
        __emit 0x00
        __emit 0xC4
        __emit 0x50
        __emit 0x67
        __emit 0x00
        __emit 0x1F
        __emit 0x51
        __emit 0x67
        __emit 0x00
        __emit 0x7A
        __emit 0x51
        __emit 0x67
        __emit 0x00
        __emit 0xD5
        __emit 0x51
        __emit 0x67
        __emit 0x00
        __emit 0x30
        __emit 0x52
        __emit 0x67
        __emit 0x00
        __emit 0x8B
        __emit 0x52
        __emit 0x67
        __emit 0x00
        __emit 0xE7
        __emit 0x52
        __emit 0x67
        __emit 0x00
        __emit 0xA6
        __emit 0x4E
        __emit 0x67
        __emit 0x00
        // small dispatch function @ 0x675380
        push esi
        mov esi, dword ptr [esp + 8]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        push 0xa0
        call dword ptr [eax + 0x14]
        push esi
        call FUN_00677590
        add esp, 4
        pop esi
        ret
        // nop padding
        nop
        nop
        nop
        nop
        // main function @ 0x6753A0
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov bl, byte ptr [eax]
        push ebp
        mov ebp, dword ptr [esp + 0x1c]
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x14]
        push ebp
        push ecx
        push eax
        push esi
        test bl, bl
        push edi
        setne bl
        call FUN_006775b0
        mov cl, al
        mov eax, dword ptr [esi + 0x10]
        add esp, 0x14
        sub eax, 0x20
        je L_438
        dec eax
        jne L_48f
        test bl, bl
        jne L_3f8
        mov edx, dword ptr [esi]
        lea eax, [esp + 0x1c]
        push eax
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x24], 0x3f800000
        call dword ptr [edx + 4]
        mov cl, 1
L_3f8:
        fld dword ptr [edi + 0x9c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je L_48f
        fld dword ptr [edi + 0x9c]
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [ecx]
        sub esp, 8
        fstp qword ptr [esp]
        push offset g_7976e8
        push ebp
        push edx
        call dword ptr [g_76b424]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret
L_438:
        test bl, bl
        jne L_453
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0x1c]
        push ecx
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x24], 0x42c80000
        call dword ptr [eax + 4]
        mov cl, 1
L_453:
        fld dword ptr [edi + 0x98]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je L_48f
        fld dword ptr [edi + 0x98]
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [edx]
        sub esp, 8
        fstp qword ptr [esp]
        push offset g_7976b4
        push ebp
        push eax
        call dword ptr [g_76b424]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret
L_48f:
        pop edi
        pop esi
        pop ebp
        mov al, cl
        pop ebx
        ret
    }
}
