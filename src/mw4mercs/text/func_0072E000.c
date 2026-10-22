/* func_0072E000.c -- in-.text data block 0x72E000 (1278 B)
 * Disassembled from reference\MW4Mercs.exe.  Texture/surface format
 * conversion routine (D3D-style) with assert checks and pixel loops.
 */

extern char g_7a5b84[];                 /* format string */
extern char g_7a5b60[];                 /* format string */
extern char g_7a5b20[];                 /* format string */
extern unsigned int g_85a22c;           /* global */
extern unsigned int g_849324;           /* global */
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00735230(void);
extern void __cdecl FUN_006f4940(void);
extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00735440(void);

__declspec(naked) void func_0072E000(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x4b8
        mov eax, dword ptr [ebp+0xc]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax+4]
        push ebx
        mov dword ptr [ebp-0x34], ecx
        mov ecx, dword ptr [eax+8]
        mov bl, byte ptr [ebp-0x32]
        push esi
        mov esi, dword ptr [eax+0xc]
        mov dword ptr [ebp-0x30], edx
        mov dx, word ptr [eax+0x10]
        push edi
        xor edi, edi
        mov al, dl
        cmp al, 0x20
        mov dword ptr [ebp-8], edi
        mov dword ptr [ebp-0x3c], edi
        mov dword ptr [ebp-0x2c], ecx
        mov dword ptr [ebp-0x28], esi
        mov word ptr [ebp-0x24], dx
        je loc_72e055
        cmp al, 0x18
        je loc_72e055
        cmp al, 8
        jne loc_72e069
        cmp word ptr [ebp-0x2f], 0x100
        ja loc_72e069
        cmp byte ptr [ebp-0x2d], 0x18
        jne loc_72e069
loc_72e055:
        cmp bl, 2
        je loc_72e0a5
        cmp bl, 0xa
        je loc_72e0a5
        cmp bl, 1
        je loc_72e0a5
        cmp bl, 9
        je loc_72e0a5
loc_72e069:
        mov eax, dword ptr [ebp-0x32]
        mov ecx, dword ptr [ebp-0x2d]
        mov edx, dword ptr [ebp-0x2f]
        and eax, 0xff
        push eax
        mov eax, dword ptr [ebp-0x24]
        and ecx, 0xff
        push ecx
        mov ecx, dword ptr [ebp+8]
        and edx, 0xffff
        push edx
        and eax, 0xff
        push eax
        push ecx
        push offset g_7a5b84
        call FUN_006fab90
        add esp, 0x18
        test eax, eax
        je loc_72e0a5
        int 3
loc_72e0a5:
        cmp word ptr [ebp-0x2c], di
        jne loc_72e0b1
        cmp word ptr [ebp-0x2a], di
        je loc_72e0c7
loc_72e0b1:
        mov edx, dword ptr [ebp+8]
        push edx
        push offset g_7a5b60
        call FUN_006fab90
        add esp, 8
        test eax, eax
        je loc_72e0c7
        int 3
loc_72e0c7:
        cmp bl, 0xa
        je loc_72e0d5
        cmp bl, 9
        mov byte ptr [ebp-1], 0
        jne loc_72e0d9
loc_72e0d5:
        mov byte ptr [ebp-1], 1
loc_72e0d9:
        mov eax, dword ptr [ebp-0x23]
        and eax, 0xff
        mov edi, eax
        and eax, 0x20
        mov ebx, esi
        mov esi, dword ptr [ebp-0x26]
        mov dword ptr [ebp-0x38], eax
        mov al, byte ptr [ebp+0x1c]
        and edi, 0x10
        and ebx, 0xffff
        and esi, 0xffff
        test al, al
        mov dword ptr [ebp-0x1c], edi
        mov dword ptr [ebp-0xc], ebx
        mov dword ptr [ebp-0x14], esi
        je loc_72e22a
        mov eax, esi
        or eax, ebx
        test eax, 0xfffff80f
        jne loc_72e12a
        lea ecx, [ebx-1]
        test ecx, ebx
        jne loc_72e12a
        lea edx, [esi-1]
        test edx, esi
        je loc_72e142
loc_72e12a:
        mov eax, dword ptr [ebp+8]
        push eax
        push esi
        push ebx
        push offset g_7a5b20
        call FUN_006fab90
        add esp, 0x10
        test eax, eax
        je loc_72e142
        int 3
loc_72e142:
        mov eax, dword ptr [ebp+0x20]
        test eax, eax
        je loc_72e151
        mov dword ptr [ebp-8], eax
        jmp loc_72e1e7
loc_72e151:
        xor eax, eax
        mov ecx, 0x1f
        lea edi, [ebp-0xb8]
        rep stosd
        push 0
        mov eax, 0x20
        lea ecx, [ebp-8]
        push ecx
        lea edx, [ebp-0xb8]
        mov dword ptr [ebp-0x70], eax
        mov dword ptr [ebp-0x64], eax
        mov eax, dword ptr [g_85a22c]
        push edx
        push eax
        mov dword ptr [ebp-0xb8], 0x7c
        mov dword ptr [ebp-0xb4], 0x1007
        mov dword ptr [ebp-0x50], 0x1800
        mov dword ptr [ebp-0xac], ebx
        mov dword ptr [ebp-0xb0], esi
        mov dword ptr [ebp-0x6c], 0x40
        mov dword ptr [ebp-0x54], 0xff000000
        mov dword ptr [ebp-0x60], 0xff0000
        mov dword ptr [ebp-0x5c], 0xff00
        mov dword ptr [ebp-0x58], 0xff
        call FUN_00735230
        mov edx, dword ptr [g_849324]
        mov ecx, esi
        imul ecx, ebx
        push 1
        shl ecx, 2
        push ecx
        push edx
        call FUN_006f4940
        mov edi, dword ptr [ebp-0x1c]
loc_72e1e7:
        mov ecx, dword ptr [ebp-8]
        push 0
        push 0x821
        lea eax, [ebp-0xb8]
        push eax
        push 0
        push ecx
        mov dword ptr [ebp-0xb8], 0x7c
        call FUN_007353f0
        mov eax, dword ptr [ebp-0xa8]
        mov edx, dword ptr [ebp-0x94]
        sar eax, 2
        lea ecx, [esi-1]
        imul ecx, eax
        shl ecx, 2
        mov dword ptr [ebp-0x10], eax
        lea eax, [ecx+edx]
        jmp loc_72e24f
loc_72e22a:
        mov eax, dword ptr [g_849324]
        mov ecx, esi
        imul ecx, ebx
        push eax
        shl ecx, 2
        push ecx
        call FUN_006f3c80
        lea ecx, [esi-1]
        imul ecx, ebx
        shl ecx, 2
        mov dword ptr [ebp-0x3c], eax
        mov dword ptr [ebp-0x10], ebx
        add eax, ecx
loc_72e24f:
        test edi, edi
        mov dword ptr [ebp-0x18], 1
        je loc_72e265
        lea eax, [eax+ebx*4-4]
        mov dword ptr [ebp-0x18], 0xffffffff
loc_72e265:
        mov edx, dword ptr [ebp-0x38]
        test edx, edx
        je loc_72e270
        sub eax, ecx
        jmp loc_72e278
loc_72e270:
        mov edx, dword ptr [ebp-0x10]
        neg edx
        mov dword ptr [ebp-0x10], edx
loc_72e278:
        mov edx, dword ptr [ebp-0x34]
        mov ecx, dword ptr [ebp+0xc]
        and edx, 0xff
        cmp word ptr [ebp-0x2f], 0
        lea edx, [edx+ecx+0x12]
        seta cl
        test cl, cl
        mov byte ptr [ebp+0x23], cl
        je loc_72e2d3
        mov edi, dword ptr [ebp-0x2f]
        and edi, 0xffff
        jle loc_72e2d3
        lea esi, [ebp-0x4b8]
loc_72e2a8:
        xor ecx, ecx
        mov cl, byte ptr [edx+2]
        xor ebx, ebx
        mov bl, byte ptr [edx+1]
        add edx, 3
        add esi, 4
        add ecx, 0xff00
        shl ecx, 8
        add ecx, ebx
        xor ebx, ebx
        mov bl, byte ptr [edx-3]
        shl ecx, 8
        add ecx, ebx
        dec edi
        mov dword ptr [esi-4], ecx
        jne loc_72e2a8
loc_72e2d3:
        mov bl, byte ptr [ebp-1]
        xor ecx, ecx
        test bl, bl
        mov byte ptr [ebp+0xf], 0
        mov byte ptr [ebp+0xb], 0
        jne loc_72e3f1
        mov bl, byte ptr [ebp+0x23]
        test bl, bl
        jne loc_72e3f1
        cmp byte ptr [ebp-0x24], 0x18
        jne loc_72e35a
        mov ecx, dword ptr [ebp-0x14]
        test ecx, ecx
        jle loc_72e4c7
        mov esi, dword ptr [ebp-0xc]
        mov dword ptr [ebp+8], ecx
loc_72e30a:
        test esi, esi
        mov dword ptr [ebp+0xc], eax
        jle loc_72e347
        mov ecx, dword ptr [ebp-0x18]
        lea edi, [ecx*4]
        xor ecx, ecx
loc_72e31b:
        mov cl, byte ptr [edx+2]
        xor ebx, ebx
        mov bl, byte ptr [edx+1]
        add edx, 3
        add ecx, 0xff00
        shl ecx, 8
        add ecx, ebx
        xor ebx, ebx
        mov bl, byte ptr [edx-3]
        shl ecx, 8
        add ecx, ebx
        mov dword ptr [eax], ecx
        add eax, edi
        dec esi
        /* __emit: MSVC6 miscomputes this backward jcc rel-offset (off-by-2) */
        __emit 0x75
        __emit 0xD7
        mov esi, dword ptr [ebp-0xc]
loc_72e347:
        mov ecx, dword ptr [ebp-0x10]
        mov eax, dword ptr [ebp+0xc]
        lea eax, [eax+ecx*4]
        dec dword ptr [ebp+8]
        jne loc_72e30a
        jmp loc_72e4ca
loc_72e35a:
        cmp dword ptr [ebp-0x18], 1
        jne loc_72e3ae
        mov esi, dword ptr [ebp-0x14]
        test esi, esi
        jle loc_72e4c7
        mov ecx, dword ptr [ebp-0xc]
        mov edi, dword ptr [ebp-0x10]
        shl ecx, 2
        shl edi, 2
        mov dword ptr [ebp+0xc], edi
        mov dword ptr [ebp+8], esi
loc_72e37d:
        mov ebx, ecx
        shr ecx, 2
        mov esi, edx
        mov edi, eax
        rep movsd
        mov ecx, ebx
        mov ebx, dword ptr [ebp+0xc]
        and ecx, 3
        rep movsb
        mov esi, dword ptr [ebp-0xc]
        mov edi, dword ptr [ebp+8]
        lea ecx, [esi*4]
        add edx, ecx
        add eax, ebx
        dec edi
        mov dword ptr [ebp+8], edi
        jne loc_72e37d
        jmp loc_72e4ca
loc_72e3ae:
        mov ecx, dword ptr [ebp-0x14]
        test ecx, ecx
        jle loc_72e4c7
        mov esi, dword ptr [ebp-0xc]
        mov dword ptr [ebp+8], ecx
loc_72e3bf:
        test esi, esi
        mov dword ptr [ebp+0xc], eax
        jle loc_72e3de
        mov ecx, dword ptr [ebp-0x18]
        lea ebx, [ecx*4]
        mov ecx, esi
loc_72e3d2:
        mov edi, dword ptr [edx]
        mov dword ptr [eax], edi
        add edx, 4
        add eax, ebx
        dec ecx
        jne loc_72e3d2
loc_72e3de:
        mov ecx, dword ptr [ebp+0xc]
        mov eax, dword ptr [ebp-0x10]
        lea eax, [ecx+eax*4]
        dec dword ptr [ebp+8]
        jne loc_72e3bf
        jmp loc_72e4ca
loc_72e3f1:
        mov esi, dword ptr [ebp-0x14]
        test esi, esi
        jle loc_72e4c7
        mov dword ptr [ebp-0x1c], esi
        mov esi, dword ptr [ebp-0xc]
loc_72e402:
        test esi, esi
        mov dword ptr [ebp-0x38], eax
        jle loc_72e4b3
        mov edi, dword ptr [ebp-0x18]
        shl edi, 2
loc_72e413:
        mov bl, byte ptr [ebp-1]
        test bl, bl
        je loc_72e462
        mov bl, byte ptr [ebp+0xf]
        test bl, bl
        jne loc_72e45d
        mov cl, byte ptr [ebp+0xb]
        test cl, cl
        jne loc_72e438
        mov cl, byte ptr [edx]
        inc edx
        cmp cl, 0x80
        jb loc_72e43d
        add cl, 0x80
        mov byte ptr [ebp+0xf], cl
        jmp loc_72e440
loc_72e438:
        mov cl, byte ptr [ebp+0xb]
        dec cl
loc_72e43d:
        mov byte ptr [ebp+0xb], cl
loc_72e440:
        mov cl, byte ptr [ebp+0x23]
        test cl, cl
        je loc_72e455
        xor ecx, ecx
        mov cl, byte ptr [edx]
        inc edx
        mov ecx, dword ptr [ebp+ecx*4-0x4b8]
        jmp loc_72e4a5
loc_72e455:
        cmp byte ptr [ebp-0x24], 0x18
        jne loc_72e4a0
        jmp loc_72e47d
loc_72e45d:
        dec byte ptr [ebp+0xf]
        jmp loc_72e4a5
loc_72e462:
        mov cl, byte ptr [ebp+0x23]
        test cl, cl
        je loc_72e477
        xor ecx, ecx
        mov cl, byte ptr [edx]
        inc edx
        mov ecx, dword ptr [ebp+ecx*4-0x4b8]
        jmp loc_72e4a5
loc_72e477:
        cmp byte ptr [ebp-0x24], 0x18
        jne loc_72e4a0
loc_72e47d:
        xor ecx, ecx
        mov cl, byte ptr [edx+2]
        xor ebx, ebx
        mov bl, byte ptr [edx+1]
        add ecx, 0xff00
        shl ecx, 8
        add ecx, ebx
        xor ebx, ebx
        mov bl, byte ptr [edx]
        shl ecx, 8
        add ecx, ebx
        add edx, 3
        jmp loc_72e4a5
loc_72e4a0:
        mov ecx, dword ptr [edx]
        add edx, 4
loc_72e4a5:
        mov dword ptr [eax], ecx
        add eax, edi
        dec esi
        jne loc_72e413
        mov esi, dword ptr [ebp-0xc]
loc_72e4b3:
        mov edi, dword ptr [ebp-0x10]
        mov eax, dword ptr [ebp-0x38]
        lea eax, [eax+edi*4]
        dec dword ptr [ebp-0x1c]
        jne loc_72e402
        jmp loc_72e4ca
loc_72e4c7:
        mov esi, dword ptr [ebp-0xc]
loc_72e4ca:
        mov eax, dword ptr [ebp-0x14]
        mov edx, dword ptr [ebp+0x18]
        mov ecx, dword ptr [ebp+0x14]
        pop edi
        mov dword ptr [edx], eax
        mov al, byte ptr [ebp+0x1c]
        test al, al
        mov dword ptr [ecx], esi
        pop esi
        pop ebx
        je loc_72e4f5
        mov ecx, dword ptr [ebp-8]
        push 0
        push ecx
        call FUN_00735440
        mov eax, dword ptr [ebp-8]
        mov esp, ebp
        pop ebp
        ret 0x1c
loc_72e4f5:
        mov eax, dword ptr [ebp-0x3c]
        mov esp, ebp
        pop ebp
        ret 0x1c
    }
}
