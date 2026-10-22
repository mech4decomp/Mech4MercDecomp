/* MLR array resize FUN_0044cd30 (179 bytes, __thiscall RET 0x4, 12-byte elems) */

extern void *__cdecl FUN_004084d0(unsigned int);
extern void  __cdecl FUN_004084e0(void *);

__declspec(naked) void func_0044cd30(void)
{
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x4]
        push edi
        mov edi, dword ptr [esp + 0x14]
        cmp edi, ebx
        mov dword ptr [esp + 0xc], esi
        jz L_44cddc
        test edi, edi
        jbe L_44cdc8
        lea eax, [edi + edi*0x2]
        shl eax, 0x2
        push ebp
        push eax
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L_44cd6c
        lea ecx, [edi + -0x1]
        mov dword ptr [esp + 0x18], ecx
        mov ebp, eax
        jmp L_44cd6e
L_44cd6c:
        xor ebp, ebp
L_44cd6e:
        mov esi, dword ptr [esi]
        test esi, esi
        jz L_44cdb5
        cmp edi, ebx
        mov edx, edi
        jc L_44cd7c
        mov edx, ebx
L_44cd7c:
        mov eax, edx
        dec edx
        test eax, eax
        jz L_44cdac
        lea ecx, [edx + edx*0x2]
        shl ecx, 0x2
        lea eax, [ecx + esi*0x1]
        lea ecx, [ecx + ebp*0x1 + 0x8]
        inc edx
L_44cd91:
        mov ebx, dword ptr [eax]
        mov dword ptr [ecx + -0x8], ebx
        mov ebx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + -0x4], ebx
        mov ebx, dword ptr [eax + 0x8]
        mov dword ptr [ecx], ebx
        dec edx
        sub eax, 0xc
        sub ecx, 0xc
        test edx, edx
        ja L_44cd91
L_44cdac:
        push esi
        call FUN_004084e0
        add esp, 0x4
L_44cdb5:
        mov ecx, dword ptr [esp + 0x10]
        mov esi, ecx
        mov dword ptr [ecx], ebp
        pop ebp
        mov dword ptr [esi + 0x4], edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x4
L_44cdc8:
        mov edx, dword ptr [esi]
        push edx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [esi], 0x0
        mov dword ptr [esi + 0x4], edi
L_44cddc:
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x4
    }
}
