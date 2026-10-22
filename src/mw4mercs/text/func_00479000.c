/* func_00479000.c - in-.text data block transcription (mlr)
 * Block 0x479000 (2819 B) contains TWO functions:
 *   - 0x00479000 (this file, 1440 B, ends at ret 0x0047959F)
 *   - 0x004795A0 (adjacent next function, NOT transcribed here)
 */

extern void __cdecl FUN_004766C0(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_00406C90(void);
extern void __cdecl FUN_0040CCD0(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_0040C9C0(void);
extern void __cdecl FUN_0040C410(void);
extern void __cdecl FUN_00423C40(void);
extern void __cdecl FUN_006F49A0(void);

__declspec(naked) void func_00479000(void)
{
    __asm {
        or eax, 0x7d99b0
        push ecx
        mov ecx, eax
        call FUN_004766C0
        mov ebp, eax
        jmp L_479013
    L_479011:
        xor ebp, ebp
    L_479013:
        push ebx
        mov ebx, dword ptr [ebp + 0xc]
        mov edi, dword ptr [ebx + 0x14]
        cmp edi, 8
        mov dword ptr [esp + 0x14], ebx
        je L_4790b2
        push 0x60
        call FUN_004084D0
        mov esi, eax
        add esp, 4
        test esi, esi
        je L_47904e
        push 0x454eb0
        push 8
        push 0xc
        push esi
        call FUN_00406C90
        mov ecx, esi
        mov dword ptr [esp + 0x10], ecx
        __emit 0xEB /* __emit: MSVC miscomputes forward jmp rel (EB 08 vs ref EB 0C) */
        __emit 0x0C
    L_47904e:
        mov dword ptr [esp + 0x10], 0
    L_47905a:
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [ebx + 0x10]
        test edx, edx
        je L_4790a8
        cmp edi, 8
        mov eax, 8
        ja L_47906d
        mov eax, edi
    L_47906d:
        mov esi, eax
        dec eax
        test esi, esi
        je L_479098
        lea esi, [eax + eax*2]
        mov ebx, edx
        lea esi, [ecx + esi*4]
        sub ebx, ecx
        lea edi, [eax + 1]
    L_479081:
        lea edx, [ebx + esi]
        push edx
        mov ecx, esi
        call FUN_0040CCD0
        dec edi
        sub esi, 0xc
        test edi, edi
        ja L_479081
        mov ebx, dword ptr [esp + 0x14]
    L_479098:
        mov eax, dword ptr [ebx + 0x10]
        push eax
        call FUN_004084E0
        mov ecx, dword ptr [esp + 0x14]
        add esp, 4
    L_4790a8:
        mov dword ptr [ebx + 0x10], ecx
        mov dword ptr [ebx + 0x14], 8
    L_4790b2:
        fld dword ptr [esp + 0x2c]
        mov esi, dword ptr [esp + 0x2c]
        fchs
        push esi
        fstp dword ptr [esp + 0x14]
        lea ecx, [esp + 0x20]
        mov edi, dword ptr [esp + 0x14]
        push edi
        push esi
        call FUN_0040C9C0
        mov ebx, dword ptr [ebx + 0x10]
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, ebx
        call FUN_0040C410
        push esi
        push edi
        push edi
        lea ecx, [esp + 0x28]
        call FUN_0040C9C0
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [ebx + 0xc]
        call FUN_0040C410
        push edi
        push edi
        push esi
        lea ecx, [esp + 0x28]
        call FUN_0040C9C0
        lea edx, [esp + 0x1c]
        push edx
        lea ecx, [ebx + 0x18]
        call FUN_0040C410
        push edi
        push edi
        push edi
        lea ecx, [esp + 0x28]
        call FUN_0040C9C0
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [ebx + 0x24]
        call FUN_0040C410
        push esi
        push esi
        push edi
        lea ecx, [esp + 0x28]
        call FUN_0040C9C0
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [ebx + 0x30]
        call FUN_0040C410
        push esi
        push esi
        push esi
        lea ecx, [esp + 0x28]
        call FUN_0040C9C0
        lea edx, [esp + 0x1c]
        push edx
        lea ecx, [ebx + 0x3c]
        call FUN_0040C410
        push edi
        push esi
        push esi
        lea ecx, [esp + 0x28]
        call FUN_0040C9C0
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [ebx + 0x48]
        call FUN_0040C410
        push edi
        push esi
        push edi
        lea ecx, [esp + 0x28]
        call FUN_0040C9C0
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [ebx + 0x54]
        call FUN_0040C410
        mov esi, dword ptr [esp + 0x14]
        mov edi, dword ptr [esi + 0xc]
        cmp edi, 6
        je L_4791e0
        push 6
        call FUN_004084D0
        mov ecx, dword ptr [esi + 8]
        add esp, 4
        test ecx, ecx
        mov ebx, eax
        je L_4791d6
        cmp edi, 6
        mov eax, 6
        ja L_4791b9
        mov eax, edi
    L_4791b9:
        mov edx, eax
        dec eax
        test edx, edx
        je L_4791cd
    L_4791c0:
        mov dl, byte ptr [ecx + eax]
        mov byte ptr [eax + ebx], dl
        mov edx, eax
        dec eax
        test edx, edx
        jne L_4791c0
    L_4791cd:
        push ecx
        call FUN_004084E0
        add esp, 4
    L_4791d6:
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 0xc], 6
    L_4791e0:
        mov eax, dword ptr [esi + 8]
        mov edx, eax
        push 1
        mov ecx, 0x4040404
        mov dword ptr [edx], ecx
        mov word ptr [edx + 4], cx
        mov edx, dword ptr [ebp]
        push 6
        push eax
        mov ecx, ebp
        call dword ptr [edx + 0xc]
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ebp]
        push 8
        push ecx
        mov ecx, ebp
        call dword ptr [eax + 0x24]
        mov esi, dword ptr [ebp + 0xc]
        mov edi, dword ptr [esi + 4]
        cmp edi, 0x18
        je L_47925a
        push 0x18
        call FUN_004084D0
        mov ecx, dword ptr [esi]
        add esp, 4
        test ecx, ecx
        mov ebx, eax
        je L_479251
        cmp edi, 0x18
        mov eax, 0x18
        ja L_479234
        mov eax, edi
    L_479234:
        mov edx, eax
        dec eax
        test edx, edx
        je L_479248
    L_47923b:
        mov dl, byte ptr [ecx + eax]
        mov byte ptr [eax + ebx], dl
        mov edx, eax
        dec eax
        test edx, edx
        jne L_47923b
    L_479248:
        push ecx
        call FUN_004084E0
        add esp, 4
    L_479251:
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 4], 0x18
    L_47925a:
        mov eax, dword ptr [esi]
        mov byte ptr [eax], 0
        mov byte ptr [eax + 1], 2
        mov byte ptr [eax + 2], 6
        mov cl, 5
        mov byte ptr [eax + 3], cl
        mov byte ptr [eax + 4], 0
        mov byte ptr [eax + 5], cl
        mov bl, 4
        mov byte ptr [eax + 6], bl
        mov byte ptr [eax + 7], 1
        mov byte ptr [eax + 8], cl
        mov byte ptr [eax + 9], 6
        mov dl, 7
        mov byte ptr [eax + 0xa], dl
        mov byte ptr [eax + 0xb], bl
        mov byte ptr [eax + 0xc], 2
        mov cl, 3
        mov byte ptr [eax + 0xd], cl
        mov byte ptr [eax + 0xe], dl
        mov byte ptr [eax + 0xf], 6
        mov byte ptr [eax + 0x10], 1
        mov byte ptr [eax + 0x11], bl
        mov byte ptr [eax + 0x12], dl
        mov edx, dword ptr [ebp]
        mov byte ptr [eax + 0x13], cl
        mov byte ptr [eax + 0x14], 0
        mov byte ptr [eax + 0x15], 1
        mov byte ptr [eax + 0x16], cl
        push 0x18
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x17], 2
        call dword ptr [edx + 0x88]
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 0x94]
        mov esi, dword ptr [esp + 0x30]
        test esi, esi
        je L_479307
        mov ebx, dword ptr [ebp + 0xc]
        add ebx, 0x20
        push 8
        mov ecx, ebx
        call FUN_00423C40
        mov ecx, dword ptr [ebx + 4]
        test ecx, ecx
        jbe L_4792f2
        mov edi, dword ptr [ebx]
        rep movsd
    L_4792f2:
        mov eax, dword ptr [ebp + 0xc]
        mov eax, dword ptr [eax + 0x24]
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ebp]
        push eax
        push ecx
        mov ecx, ebp
        call dword ptr [edx + 0xa4]
    L_479307:
        mov esi, dword ptr [ebp + 0xc]
        mov ebx, dword ptr [esi + 0x1c]
        add esi, 0x18
        cmp ebx, 8
        je L_47937f
        push 0x40
        call FUN_004084D0
        mov edi, eax
        add esp, 4
        test edi, edi
        je L_479336
        push 0x423b70
        push 8
        push 8
        push edi
        call FUN_00406C90
        jmp L_479338
    L_479336:
        xor edi, edi
    L_479338:
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je L_479376
        cmp ebx, 8
        mov edx, 8
        ja L_47934a
        mov edx, ebx
    L_47934a:
        mov eax, edx
        dec edx
        test eax, eax
        je L_47936b
        lea eax, [edi + edx*8]
        sub ecx, edi
        inc edx
    L_479357:
        mov ebx, dword ptr [ecx + eax]
        mov dword ptr [eax], ebx
        mov ebx, dword ptr [ecx + eax + 4]
        mov dword ptr [eax + 4], ebx
        dec edx
        sub eax, 8
        test edx, edx
        ja L_479357
    L_47936b:
        mov eax, dword ptr [esi]
        push eax
        call FUN_004084E0
        add esp, 4
    L_479376:
        mov dword ptr [esi], edi
        mov dword ptr [esi + 4], 8
    L_47937f:
        mov eax, dword ptr [esi]
        mov edi, dword ptr [esp + 0x34]
        test edi, edi
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [eax], ecx
        mov dword ptr [esp + 0x18], 0
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 4], edx
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 8], ecx
        mov dword ptr [esp + 0x18], 0
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0xc], edx
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [esp + 0x18], 0
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0x14], edx
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [esp + 0x18], 0
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0x1c], edx
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x20], ecx
        mov dword ptr [esp + 0x18], 0
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0x24], edx
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x28], ecx
        mov dword ptr [esp + 0x18], 0
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0x2c], edx
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x18], 0
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0x30], ecx
        mov dword ptr [eax + 0x34], edx
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x18], 0
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0x38], ecx
        mov dword ptr [eax + 0x3c], edx
        pop ebx
        je L_479585
        mov eax, dword ptr [ebp]
        push 0
        push edi
        mov ecx, ebp
        call dword ptr [eax + 0x14]
        test dword ptr [edi], 0x3fff
        jbe L_479585
        mov eax, dword ptr [esi]
        mov dword ptr [esp + 0x10], 0
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [eax], ecx
        mov dword ptr [esp + 0x14], 0
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 4], edx
        mov dword ptr [esp + 0x10], 0x3f800000
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 8], ecx
        mov dword ptr [esp + 0x14], 0
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0xc], edx
        mov dword ptr [esp + 0x10], 0x3e800000
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [esp + 0x14], 0x3e800000
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x14], edx
        mov dword ptr [esp + 0x10], 0x3f400000
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [esp + 0x14], 0x3e800000
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x1c], edx
        mov dword ptr [esp + 0x10], 0x3f800000
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x20], ecx
        mov dword ptr [esp + 0x14], 0x3f800000
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x24], edx
        mov dword ptr [esp + 0x10], 0
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x28], ecx
        mov dword ptr [esp + 0x14], 0x3f800000
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x2c], edx
        mov dword ptr [esp + 0x10], 0x3e800000
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x14], 0x3f400000
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x30], ecx
        mov dword ptr [eax + 0x34], edx
        mov dword ptr [esp + 0x10], 0x3f400000
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x14], 0x3f400000
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x38], ecx
        mov dword ptr [eax + 0x3c], edx
    L_479585:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ebp]
        push 8
        push ecx
        mov ecx, ebp
        call dword ptr [eax + 0x2c]
        call FUN_006F49A0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        add esp, 0x18
        ret
    }
}
