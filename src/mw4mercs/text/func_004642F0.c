/* func_004642F0.c -- in-.text data block 0x464308 (misaligned; real fn 0x4642F0)
 * Disassembled from reference\MW4Mercs.exe.  NOTE: the assigned block
 * 0x464308 starts 24 bytes into this function (mid-call at 0x464306); the
 * real function entry is 0x4642F0.  Object/vertex-buffer setup routine.
 */

extern unsigned int g_7b958c;           /* global */
extern unsigned int g_7d9928;           /* global */
extern char g_454eb0[];                 /* vtable */
extern char g_423b70[];                 /* vtable */
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004618d0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00423c40(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void func_004642F0(void)
{
    __asm {
        mov eax, dword ptr [g_7b958c]
        sub esp, 0xc
        push ebp
        push esi
        push edi
        push eax
        call FUN_006f4950
        push 0xa8
        call FUN_004084d0
        add esp, 4
        test eax, eax
        je loc_464324
        mov ecx, dword ptr [g_7d9928]
        push ecx
        mov ecx, eax
        call FUN_004618d0
        mov ebp, eax
        jmp loc_464326
loc_464324:
        xor ebp, ebp
loc_464326:
        mov edx, dword ptr [esp+0x2c]
        mov eax, dword ptr [esp+0x30]
        mov ecx, dword ptr [esp+0x34]
        push ebx
        mov ebx, dword ptr [ebp+0xc]
        mov edi, dword ptr [ebx+0x14]
        cmp edi, 8
        mov dword ptr [ebp+0x90], edx
        mov edx, dword ptr [esp+0x3c]
        mov dword ptr [ebp+0x94], eax
        mov dword ptr [ebp+0x98], ecx
        mov dword ptr [ebp+0x9c], edx
        mov dword ptr [esp+0x34], ebx
        je loc_4643ed
        push 0x60
        call FUN_004084d0
        mov esi, eax
        add esp, 4
        test esi, esi
        je loc_464389
        push offset g_454eb0
        push 8
        push 0xc
        push esi
        call FUN_00406c90
        mov ecx, esi
        mov dword ptr [esp+0x30], ecx
        jmp loc_464395
loc_464389:
        mov dword ptr [esp+0x30], 0
        mov ecx, dword ptr [esp+0x30]
loc_464395:
        mov edx, dword ptr [ebx+0x10]
        test edx, edx
        je loc_4643e3
        cmp edi, 8
        mov eax, 8
        ja loc_4643a8
        mov eax, edi
loc_4643a8:
        mov esi, eax
        dec eax
        test esi, esi
        je loc_4643d3
        lea esi, [eax+eax*2]
        mov ebx, edx
        lea esi, [ecx+esi*4]
        sub ebx, ecx
        lea edi, [eax+1]
loc_4643bc:
        lea eax, [ebx+esi]
        push eax
        mov ecx, esi
        call FUN_0040ccd0
        dec edi
        sub esi, 0xc
        test edi, edi
        ja loc_4643bc
        mov ebx, dword ptr [esp+0x34]
loc_4643d3:
        mov eax, dword ptr [ebx+0x10]
        push eax
        call FUN_004084e0
        mov ecx, dword ptr [esp+0x34]
        add esp, 4
loc_4643e3:
        mov dword ptr [ebx+0x10], ecx
        mov dword ptr [ebx+0x14], 8
loc_4643ed:
        fld dword ptr [esp+0x20]
        mov esi, dword ptr [esp+0x20]
        fchs
        push esi
        fstp dword ptr [esp+0x34]
        lea ecx, [esp+0x14]
        mov edi, dword ptr [esp+0x34]
        push edi
        push esi
        call FUN_0040c9c0
        mov ebx, dword ptr [ebx+0x10]
        lea ecx, [esp+0x10]
        push ecx
        mov ecx, ebx
        call FUN_0040c410
        push esi
        push edi
        push edi
        lea ecx, [esp+0x1c]
        call FUN_0040c9c0
        lea edx, [esp+0x10]
        push edx
        lea ecx, [ebx+0xc]
        call FUN_0040c410
        push edi
        push edi
        push esi
        lea ecx, [esp+0x1c]
        call FUN_0040c9c0
        lea eax, [esp+0x10]
        push eax
        lea ecx, [ebx+0x18]
        call FUN_0040c410
        push edi
        push edi
        push edi
        lea ecx, [esp+0x1c]
        call FUN_0040c9c0
        lea ecx, [esp+0x10]
        push ecx
        lea ecx, [ebx+0x24]
        call FUN_0040c410
        push esi
        push esi
        push edi
        lea ecx, [esp+0x1c]
        call FUN_0040c9c0
        lea edx, [esp+0x10]
        push edx
        lea ecx, [ebx+0x30]
        call FUN_0040c410
        push esi
        push esi
        push esi
        lea ecx, [esp+0x1c]
        call FUN_0040c9c0
        lea eax, [esp+0x10]
        push eax
        lea ecx, [ebx+0x3c]
        call FUN_0040c410
        push edi
        push esi
        push esi
        lea ecx, [esp+0x1c]
        call FUN_0040c9c0
        lea ecx, [esp+0x10]
        push ecx
        lea ecx, [ebx+0x48]
        call FUN_0040c410
        push edi
        push esi
        push edi
        lea ecx, [esp+0x1c]
        call FUN_0040c9c0
        lea edx, [esp+0x10]
        push edx
        lea ecx, [ebx+0x54]
        call FUN_0040c410
        mov esi, dword ptr [esp+0x34]
        mov edi, dword ptr [esi+0xc]
        cmp edi, 6
        je loc_46451b
        push 6
        call FUN_004084d0
        mov ecx, dword ptr [esi+8]
        add esp, 4
        test ecx, ecx
        mov ebx, eax
        je loc_464511
        cmp edi, 6
        mov eax, 6
        ja loc_4644f4
        mov eax, edi
loc_4644f4:
        mov edx, eax
        dec eax
        test edx, edx
        je loc_464508
loc_4644fb:
        mov dl, byte ptr [ecx+eax]
        mov byte ptr [eax+ebx], dl
        mov edx, eax
        dec eax
        test edx, edx
        jne loc_4644fb
loc_464508:
        push ecx
        call FUN_004084e0
        add esp, 4
loc_464511:
        mov dword ptr [esi+8], ebx
        mov dword ptr [esi+0xc], 6
loc_46451b:
        mov eax, dword ptr [esi+8]
        mov edx, eax
        push 1
        mov ecx, 0x4040404
        mov dword ptr [edx], ecx
        mov word ptr [edx+4], cx
        mov edx, dword ptr [ebp]
        push 6
        push eax
        mov ecx, ebp
        call dword ptr [edx+0xc]
        mov ecx, dword ptr [esi+0x10]
        mov eax, dword ptr [ebp]
        push 8
        push ecx
        mov ecx, ebp
        call dword ptr [eax+0x24]
        mov esi, dword ptr [ebp+0xc]
        mov edi, dword ptr [esi+4]
        cmp edi, 0x18
        je loc_464595
        push 0x18
        call FUN_004084d0
        mov ecx, dword ptr [esi]
        add esp, 4
        test ecx, ecx
        mov ebx, eax
        je loc_46458c
        cmp edi, 0x18
        mov eax, 0x18
        ja loc_46456f
        mov eax, edi
loc_46456f:
        mov edx, eax
        dec eax
        test edx, edx
        je loc_464583
loc_464576:
        mov dl, byte ptr [ecx+eax]
        mov byte ptr [eax+ebx], dl
        mov edx, eax
        dec eax
        test edx, edx
        jne loc_464576
loc_464583:
        push ecx
        call FUN_004084e0
        add esp, 4
loc_46458c:
        mov dword ptr [esi], ebx
        mov dword ptr [esi+4], 0x18
loc_464595:
        mov eax, dword ptr [esi]
        mov byte ptr [eax], 0
        mov byte ptr [eax+1], 2
        mov byte ptr [eax+2], 6
        mov cl, 5
        mov byte ptr [eax+3], cl
        mov byte ptr [eax+4], 0
        mov byte ptr [eax+5], cl
        mov bl, 4
        mov byte ptr [eax+6], bl
        mov byte ptr [eax+7], 1
        mov byte ptr [eax+8], cl
        mov byte ptr [eax+9], 6
        mov dl, 7
        mov byte ptr [eax+0xa], dl
        mov byte ptr [eax+0xb], bl
        mov byte ptr [eax+0xc], 2
        mov cl, 3
        mov byte ptr [eax+0xd], cl
        mov byte ptr [eax+0xe], dl
        mov byte ptr [eax+0xf], 6
        mov byte ptr [eax+0x10], 1
        mov byte ptr [eax+0x11], bl
        mov byte ptr [eax+0x12], dl
        mov edx, dword ptr [ebp]
        mov byte ptr [eax+0x13], cl
        mov byte ptr [eax+0x14], 0
        mov byte ptr [eax+0x15], 1
        mov byte ptr [eax+0x16], cl
        push 0x18
        push eax
        mov ecx, ebp
        mov byte ptr [eax+0x17], 2
        call dword ptr [edx+0x88]
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax+0x94]
        mov esi, dword ptr [esp+0x24]
        test esi, esi
        je loc_464642
        mov ebx, dword ptr [ebp+0xc]
        add ebx, 0x20
        push 8
        mov ecx, ebx
        call FUN_00423c40
        mov ecx, dword ptr [ebx+4]
        test ecx, ecx
        jbe loc_46462d
        mov edi, dword ptr [ebx]
        rep movsd
loc_46462d:
        mov eax, dword ptr [ebp+0xc]
        mov eax, dword ptr [eax+0x24]
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ebp]
        push eax
        push ecx
        mov ecx, ebp
        call dword ptr [edx+0xa4]
loc_464642:
        mov esi, dword ptr [ebp+0xc]
        mov ebx, dword ptr [esi+0x1c]
        add esi, 0x18
        cmp ebx, 8
        je loc_4646ba
        push 0x40
        call FUN_004084d0
        mov edi, eax
        add esp, 4
        test edi, edi
        je loc_464671
        push offset g_423b70
        push 8
        push 8
        push edi
        call FUN_00406c90
        jmp loc_464673
loc_464671:
        xor edi, edi
loc_464673:
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je loc_4646b1
        cmp ebx, 8
        mov edx, 8
        ja loc_464685
        mov edx, ebx
loc_464685:
        mov eax, edx
        dec edx
        test eax, eax
        je loc_4646a6
        lea eax, [edi+edx*8]
        sub ecx, edi
        inc edx
loc_464692:
        mov ebx, dword ptr [ecx+eax]
        mov dword ptr [eax], ebx
        mov ebx, dword ptr [ecx+eax+4]
        mov dword ptr [eax+4], ebx
        dec edx
        sub eax, 8
        test edx, edx
        ja loc_464692
loc_4646a6:
        mov eax, dword ptr [esi]
        push eax
        call FUN_004084e0
        add esp, 4
loc_4646b1:
        mov dword ptr [esi], edi
        mov dword ptr [esi+4], 8
loc_4646ba:
        mov eax, dword ptr [esi]
        mov dword ptr [esp+0x10], 0
        mov edx, dword ptr [esp+0x10]
        mov dword ptr [esp+0x14], 0
        mov edi, dword ptr [esp+0x14]
        mov ecx, 8
        pop ebx
loc_4646da:
        mov dword ptr [eax], edx
        mov dword ptr [eax+4], edi
        add eax, 8
        dec ecx
        jne loc_4646da
        mov edi, dword ptr [esp+0x24]
        test edi, edi
        je loc_464808
        mov edx, dword ptr [ebp]
        push 0
        push edi
        mov ecx, ebp
        call dword ptr [edx+0x14]
        test dword ptr [edi], 0x3fff
        jbe loc_4647f9
        mov eax, dword ptr [esi]
        mov dword ptr [esp+0xc], 0
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [eax], ecx
        mov dword ptr [esp+0x10], 0
        mov edx, dword ptr [esp+0x10]
        mov dword ptr [eax+4], edx
        mov dword ptr [esp+0xc], 0x3f800000
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [eax+8], ecx
        mov dword ptr [esp+0x10], 0
        mov edx, dword ptr [esp+0x10]
        mov dword ptr [eax+0xc], edx
        mov dword ptr [esp+0xc], 0x3e800000
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [eax+0x10], ecx
        mov dword ptr [esp+0x10], 0x3e800000
        mov edx, dword ptr [esp+0x10]
        mov dword ptr [eax+0x14], edx
        mov dword ptr [esp+0xc], 0x3f400000
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [eax+0x18], ecx
        mov dword ptr [esp+0x10], 0x3e800000
        mov edx, dword ptr [esp+0x10]
        mov dword ptr [eax+0x1c], edx
        mov dword ptr [esp+0xc], 0x3f800000
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [eax+0x20], ecx
        mov dword ptr [esp+0x10], 0x3f800000
        mov edx, dword ptr [esp+0x10]
        mov dword ptr [eax+0x24], edx
        mov dword ptr [esp+0xc], 0
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [eax+0x28], ecx
        mov dword ptr [esp+0x10], 0x3f800000
        mov edx, dword ptr [esp+0x10]
        mov dword ptr [eax+0x2c], edx
        mov dword ptr [esp+0xc], 0x3e800000
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [esp+0x10], 0x3f400000
        mov edx, dword ptr [esp+0x10]
        mov dword ptr [eax+0x30], ecx
        mov dword ptr [eax+0x34], edx
        mov dword ptr [esp+0xc], 0x3f400000
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [esp+0x10], 0x3f400000
        mov edx, dword ptr [esp+0x10]
        mov dword ptr [eax+0x38], ecx
        mov dword ptr [eax+0x3c], edx
loc_4647f9:
        mov ecx, dword ptr [esp+0x28]
        mov eax, dword ptr [ebp]
        push 1
        push ecx
        mov ecx, ebp
        call dword ptr [eax+0x14]
loc_464808:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [ebp]
        push 8
        push eax
        mov ecx, ebp
        call dword ptr [edx+0x2c]
        call FUN_006f49a0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        add esp, 0xc
        ret
    }
}
