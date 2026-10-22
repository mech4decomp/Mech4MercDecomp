/* FUN_006D5F20 - 0x006D5F20, size 4106 B (block 0x6D5F20, only fn)
 * __stdcall, RET 0x14 (this+ecx). Big palette/texture-blit dispatcher:
 * validates a (y,x) region against a matrix's bounds, walks a free-list of
 * spans keyed by [edx+8] rows, then per span picks a fill op via a nested
 * opcode->index dispatch (7 in-.text jump tables + byte-index tables at
 * 0x6D6B34..0x6D6F29, all emitted as __emit) and calls one of ~50 helper
 * blit routines (FUN_006d3fc0..006dcb90 family). Returns al=1 on success,
 * al=0 on bad args.
 *
 * NOTE: the trailing 1017 B (0x6D6B31..0x6D6F29) are the jump tables +
 * byte-index tables (raw data). The 7 `jmp [reg*4+imm]` dispatches are
 * __emit (MSVC6 re-bases them via EBX). The 0x7b68d0/0x7b68d1/0x7b68d2
 * byte runs and 0x83f608 dword table live in .data and are referenced by
 * literal displacement.
 */
#include <windows.h>

extern void __cdecl FUN_004084d0(void);   /* alloc */
extern void __cdecl FUN_004084e0(void);   /* free */
extern void __cdecl FUN_006d3fc0(void);
extern void __cdecl FUN_006dcb90(void);
extern void __cdecl FUN_006dcd00(void);
extern void __cdecl FUN_006dce70(void);
extern void __cdecl FUN_006dcfe0(void);
extern void __cdecl FUN_006dd150(void);
extern void __cdecl FUN_006dd580(void);
extern void __cdecl FUN_006dd990(void);
extern void __cdecl FUN_006ddc60(void);
extern void __cdecl FUN_006ddf30(void);
extern void __cdecl FUN_006de1f0(void);
extern void __cdecl FUN_006de4c0(void);
extern void __cdecl FUN_006de780(void);
extern void __cdecl FUN_006dea50(void);
extern void __cdecl FUN_006ded10(void);
extern void __cdecl FUN_006defd0(void);
extern void __cdecl FUN_006df040(void);
extern void __cdecl FUN_006df0b0(void);
extern void __cdecl FUN_006df350(void);
extern void __cdecl FUN_006df5f0(void);
extern void __cdecl FUN_006df890(void);
extern void __cdecl FUN_006dfb30(void);
extern void __cdecl FUN_006dfed0(void);
extern void __cdecl FUN_006dff10(void);
extern void __cdecl FUN_006dff50(void);
extern void __cdecl FUN_006dff90(void);
extern void __cdecl FUN_006d82f0(void);
extern void __cdecl FUN_006d8550(void);
extern void __cdecl FUN_006d87c0(void);
extern void __cdecl FUN_006d8a00(void);
extern void __cdecl FUN_006d94e0(void);
extern void __cdecl FUN_006d98b0(void);
extern void __cdecl FUN_006d9c90(void);
extern void __cdecl FUN_006da070(void);
extern void __cdecl FUN_006da460(void);
extern void __cdecl FUN_006da830(void);
extern void __cdecl FUN_006dac00(void);
extern void __cdecl FUN_006dafd0(void);
extern void __cdecl FUN_006db380(void);
extern void __cdecl FUN_006db470(void);
extern void __cdecl FUN_006db560(void);
extern void __cdecl FUN_006db8f0(void);
extern void __cdecl FUN_006dbc90(void);
extern void __cdecl FUN_006dc010(void);
extern void __cdecl FUN_006dc3b0(void);
extern void __cdecl FUN_006dc790(void);
extern void __cdecl FUN_006dc890(void);
extern void __cdecl FUN_006dc990(void);
extern void __cdecl FUN_006dca90(void);
extern void __cdecl FUN_006d8c60(void);
extern void __cdecl FUN_006d9090(void);

__declspec(naked) void func_006D5F20(void)
{
    __asm {
        sub esp, 0x838
        push ebx
        mov ebx, dword ptr [esp + 0x840]
        push ebp
        xor ebp, ebp
        cmp ebx, ebp
        push esi
        push edi
        mov eax, ecx
        jl L_6b22
        cmp ebx, dword ptr [eax + 8]
        jge L_6b22
        mov edi, dword ptr [esp + 0x850]
        cmp edi, ebp
        jl L_6b22
        mov edx, dword ptr [eax + 0xc]
        cmp edi, edx
        jge L_6b22
        mov ecx, dword ptr [eax + 4]
        imul edx, ebx
        mov esi, edi
        shl esi, cl
        mov dword ptr [esp + 0x14], esi
        mov esi, ebx
        shl esi, cl
        lea ecx, [edx + edi]
        mov edx, dword ptr [eax + 0x124]
        mov dword ptr [esp + 0x30], esi
        cmp dword ptr [edx + ecx*8 + 4], ebp
        je L_6b22
        mov edx, dword ptr [eax + 0x128]
        mov edi, dword ptr [edx + ecx*4]
        mov ecx, dword ptr [esp + 0x854]
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x34], ecx
        mov ecx, dword ptr [esp + 0x858]
        mov edx, 1
        shl edx, cl
        xor ebx, ebx
        mov dword ptr [esp + 0x2c], edi
        mov dword ptr [esp + 0x24], ebx
        dec edx
        cmp eax, ebp
        mov dword ptr [esp + 0x40], edx
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x28], eax
        jle L_6b13
L_5fcc:
        cmp edi, ebp
        je L_6060
L_5fd4:
        mov edx, dword ptr [esp + 0x1c]
        cmp dword ptr [edi + 8], edx
        jne L_605c
        push 0x10
        call FUN_004084d0
        add esp, 4
        cmp eax, ebp
        je L_5ffa
        mov dword ptr [eax], ebp
        mov dword ptr [eax + 4], ebp
        mov dword ptr [eax + 8], ebp
        mov dword ptr [eax + 0xc], ebp
        mov edx, eax
        jmp L_5ffc
L_5ffa:
        xor edx, edx
L_5ffc:
        cmp ebx, ebp
        mov eax, dword ptr [edi + 0xc]
        mov dword ptr [edx], edi
        mov dword ptr [edx + 4], eax
        je L_604b
        mov eax, dword ptr [ebx + 8]
        cmp eax, ebp
        mov ecx, ebx
        je L_602e
        mov esi, dword ptr [edi + 0x10]
        mov esi, dword ptr [esi + 0x18]
L_6017:
        mov edi, dword ptr [eax]
        mov edi, dword ptr [edi + 0x10]
        cmp dword ptr [edi + 0x18], esi
        jge L_602a
        mov ecx, eax
        mov eax, dword ptr [ecx + 8]
        cmp eax, ebp
        jne L_6017
L_602a:
        mov edi, dword ptr [esp + 0x2c]
L_602e:
        mov eax, dword ptr [ecx + 8]
        cmp eax, ebp
        jne L_603d
        mov dword ptr [ecx + 8], edx
        mov dword ptr [edx + 0xc], ecx
        jmp L_604d
L_603d:
        mov dword ptr [edx + 8], eax
        mov dword ptr [eax + 0xc], edx
        mov dword ptr [ecx + 8], edx
        mov dword ptr [edx + 0xc], ecx
        jmp L_604d
L_604b:
        mov ebx, edx
L_604d:
        mov edi, dword ptr [edi + 0x18]
        cmp edi, ebp
        mov dword ptr [esp + 0x2c], edi
        jne L_5fd4
L_605c:
        mov dword ptr [esp + 0x24], ebx
L_6060:
        mov ecx, dword ptr [esp + 0x40]
        test dword ptr [esp + 0x1c], ecx
        jne L_6a72
        cmp ebx, ebp
        jne L_609e
        mov edx, dword ptr [esp + 0x28]
        lea ecx, [edx*4]
        cmp ecx, ebp
        jle L_6a3c
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        lea edi, [esp + 0x48]
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        jmp L_6a3c
L_609e:
        xor edx, edx
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x3c], edx
        mov eax, ebx
        jmp L_60b0
L_60ac:
        mov edx, dword ptr [esp + 0x3c]
L_60b0:
        mov eax, dword ptr [eax]
        mov ebp, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x858]
        mov esi, dword ptr [eax + 4]
        mov ebx, ebp
        sar ebx, cl
        mov ecx, dword ptr [esp + 0x85c]
        sub ecx, 0
        lea edi, [esp + ebx*4 + 0x48]
        je L_6432
        dec ecx
        je L_63f2
        dec ecx
        jne L_6a25
        mov eax, dword ptr [eax + 0x10]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esp + 0x44], eax
        mov eax, dword ptr [ecx]
        mov dword ptr [esp + 0x18], ecx
        call dword ptr [eax + 4]
        test eax, eax
        je L_6a25
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [ecx + 0x40]
        mov ecx, dword ptr [esp + 0x1c]
        lea edx, [eax + eax*2]
        mov eax, dword ptr [edx*4 + 0x83f608]
        mov edx, dword ptr [esp + 0x30]
        mov dword ptr [esp + 0x38], eax
        lea eax, [ecx + edx]
        mov ecx, dword ptr [esp + 0x858]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x48]
        push eax
        add ebp, edx
        push ebp
        mov dword ptr [esp + 0x1c], eax
        call FUN_006d3fc0
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [eax]
        mov ebp, dword ptr [ecx + 0x10]
        mov eax, dword ptr [esp + 0x858]
        mov edx, dword ptr [esp + 0x18]
        mov ecx, eax
        sar esi, cl
        mov ecx, dword ptr [esp + 0x38]
        shl eax, 0x18
        or eax, ecx
        mov ecx, dword ptr [edx + 0x30]
        and ecx, 0x3fd5
        cmp ecx, 0x180
        jg L_62b1
        je L_62a2
        cmp ecx, 0x141
        jg L_622a
        je L_621b
        cmp ecx, 0x104
        jg L_61ec
        je L_61dd
        sub ecx, 0x40
        je L_61c6
        sub ecx, 0xc0
        je L_61b7
        dec ecx
        jne L_6a25
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dcd00
        jmp L_6a22
L_61b7:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dcb90
        jmp L_6a22
L_61c6:
        cmp ebx, esi
        jge L_6a25
        mov eax, dword ptr [esp + 0x38]
        mov ecx, esi
        sub ecx, ebx
        rep stosd
        jmp L_6a25
L_61dd:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dce70
        jmp L_6a22
L_61ec:
        sub ecx, 0x105
        je L_620c
        sub ecx, 0x3b
        jne L_6a25
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dd990
        jmp L_6a22
L_620c:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dcfe0
        jmp L_6a22
L_621b:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006ddc60
        jmp L_6a22
L_622a:
        add ecx, 0xfffffebc
        cmp ecx, 0x11
        ja L_6a25
        xor edx, edx
        mov dl, byte ptr [ecx + 0x6d6b50]
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x34
        __emit 0x6B
        __emit 0x6D
        __emit 0x00
L_6248:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006ddf30
        jmp L_6a22
L_6257:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006de4c0
        jmp L_6a22
L_6266:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006de1f0
        jmp L_6a22
L_6275:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006de780
        jmp L_6a22
L_6284:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dea50
        jmp L_6a22
L_6293:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006ded10
        jmp L_6a22
L_62a2:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006defd0
        jmp L_6a22
L_62b1:
        cmp ecx, 0x205
        jg L_6389
        je L_636b
        add ecx, 0xfffffe7f
        cmp ecx, 0x83
        ja L_6a25
        xor edx, edx
        mov dl, byte ptr [ecx + 0x6d6b80]
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x64
        __emit 0x6B
        __emit 0x6D
        __emit 0x00
L_62e4:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006df040
        jmp L_6a22
L_62f3:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dd150
        jmp L_6a22
L_6302:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dd580
        jmp L_6a22
L_6311:
        mov ecx, dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push esi
        push ebx
        push eax
        add ebx, ecx
        push ebx
        push edi
        push ebp
        call FUN_006df0b0
        add esp, 0x1c
        jmp L_6a25
L_632f:
        mov edx, dword ptr [esp + 0x10]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push esi
        push ebx
        push edx
        add ebx, eax
        push ebx
        push edi
        push ebp
        call FUN_006df350
        add esp, 0x1c
        jmp L_6a25
L_634d:
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        push eax
        push esi
        push ebx
        push ecx
        add ebx, edx
        push ebx
        push edi
        push ebp
        call FUN_006df5f0
        add esp, 0x1c
        jmp L_6a25
L_636b:
        mov ecx, dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push esi
        push ebx
        push eax
        add ebx, ecx
        push ebx
        push edi
        push ebp
        call FUN_006df890
        add esp, 0x1c
        jmp L_6a25
L_6389:
        add ecx, 0xfffffdc0
        cmp ecx, 0x45
        ja L_6a25
        xor edx, edx
        mov dl, byte ptr [ecx + 0x6d6c1c]
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x04
        __emit 0x6C
        __emit 0x6D
        __emit 0x00
L_63a7:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dfed0
        jmp L_6a22
L_63b6:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dff10
        jmp L_6a22
L_63c5:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dff50
        jmp L_6a22
L_63d4:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dff90
        jmp L_6a22
L_63e3:
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dfb30
        jmp L_6a22
L_63f2:
        mov ecx, dword ptr [esp + 0x858]
        sar esi, cl
        inc edx
        mov dword ptr [esp + 0x3c], edx
        cmp ebx, esi
        jge L_6a25
        mov al, byte ptr [edx + edx*2 + 0x7b68d2]
        mov cl, byte ptr [edx + edx*2 + 0x7b68d1]
        mov dl, byte ptr [edx + edx*2 + 0x7b68d0]
        sub esi, ebx
L_641f:
        mov byte ptr [edi], al
        mov byte ptr [edi + 1], cl
        mov byte ptr [edi + 2], dl
        add edi, 4
        dec esi
        jne L_641f
        jmp L_6a25
L_6432:
        mov ecx, dword ptr [eax + 0x10]
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [esp + 0x30]
        add eax, edx
        mov edx, dword ptr [esp + 0x858]
        push edx
        push eax
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [esp + 0x1c]
        add ebp, eax
        push ebp
        call FUN_006d3fc0
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [esp + 0x858]
        mov ebp, dword ptr [edx + 0x10]
        mov eax, dword ptr [ebp + 0x1c]
        sar esi, cl
        mov ecx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [ecx + 0x30]
        and ecx, 0x3fd5
        cmp ecx, 0x151
        jg L_685e
        je L_6848
        cmp ecx, 0x101
        jg L_6790
        je L_677a
        add ecx, -0x40
        cmp ecx, 0xc0
        ja L_6a25
        xor edx, edx
        mov dl, byte ptr [ecx + 0x6d6c84]
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x64
        __emit 0x6C
        __emit 0x6D
        __emit 0x00
L_64c3:
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [ecx + 0x24]
        mov ecx, dword ptr [edx + 0x20]
        mov edx, dword ptr [ebp + 4]
        mov ebp, dword ptr [ebp + 0x20]
        mov dword ptr [esp + 0x10], ecx
        mov ecx, dword ptr [edx + 0x24]
        mov edx, dword ptr [ecx + 0x10]
        mov ecx, dword ptr [esp + 0x858]
        sar edx, cl
        mov ecx, dword ptr [esp + 0x10]
        imul edx, ecx
        cmp ebx, esi
        jge L_6a25
        sub esi, ebx
L_64f7:
        mov bl, byte ptr [eax]
        shl bl, 3
        mov byte ptr [edi], bl
        mov ebx, dword ptr [eax]
        sar ebx, 2
        and bl, 0xf8
        mov byte ptr [edi + 1], bl
        mov ebx, dword ptr [eax]
        sar ebx, 7
        mov byte ptr [edi + 2], bl
        add edi, 4
        add eax, ecx
        dec ebp
        test ebp, ebp
        jg L_651f
        sub eax, edx
        mov ebp, edx
L_651f:
        dec esi
        jne L_64f7
        jmp L_6a25
L_6527:
        mov edx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [edx + 0x24]
        mov edx, dword ptr [ecx + 0x20]
        mov ecx, dword ptr [ebp + 4]
        mov ebp, dword ptr [ebp + 0x20]
        mov dword ptr [esp + 0x10], edx
        mov edx, dword ptr [ecx + 0x24]
        mov edx, dword ptr [edx + 0x10]
        mov ecx, dword ptr [esp + 0x858]
        sar edx, cl
        mov ecx, dword ptr [esp + 0x10]
        imul edx, ecx
        cmp ebx, esi
        jge L_6a25
        sub esi, ebx
L_655b:
        mov bl, byte ptr [eax]
        shl bl, 3
        mov byte ptr [edi], bl
        mov ebx, dword ptr [eax]
        sar ebx, 2
        and bl, 0xf8
        mov byte ptr [edi + 1], bl
        mov ebx, dword ptr [eax]
        sar ebx, 7
        mov byte ptr [edi + 2], bl
        add edi, 4
        sub eax, ecx
        dec ebp
        test ebp, ebp
        jg L_6583
        add eax, edx
        mov ebp, edx
L_6583:
        dec esi
        jne L_655b
        jmp L_6a25
L_658b:
        sub esi, ebx
        test esi, esi
        jle L_6a25
        mov ebp, eax
L_6597:
        xor ecx, ecx
        mov cx, word ptr [ebp]
        xor edx, edx
        mov dl, byte ptr [edi]
        mov eax, ecx
        and eax, 0x1f
        lea edx, [edx + eax*8]
        test edx, 0xffffff00
        je L_65b6
        mov edx, 0xff
L_65b6:
        mov byte ptr [edi], dl
        xor eax, eax
        mov al, byte ptr [edi + 1]
        mov edx, ecx
        shr edx, 2
        and edx, 0xf8
        add edx, eax
        test edx, 0xffffff00
        je L_65d7
        mov edx, 0xff
L_65d7:
        mov byte ptr [edi + 1], dl
        xor edx, edx
        mov dl, byte ptr [edi + 2]
        shr ecx, 7
        and ecx, 0xf8
        add ecx, edx
        test ecx, 0xffffff00
        je L_65f7
        mov ecx, 0xff
L_65f7:
        mov byte ptr [edi + 2], cl
        add edi, 4
        add ebp, 2
        dec esi
        jne L_6597
        jmp L_6a25
L_6608:
        cmp ebx, esi
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [ecx + 0x24]
        mov edx, dword ptr [edx + 0x20]
        jge L_6a25
        sub esi, ebx
L_661c:
        xor ecx, ecx
        mov cl, byte ptr [eax]
        xor ebx, ebx
        mov bl, byte ptr [edi]
        and ecx, 0x1f
        lea ecx, [ebx + ecx*8]
        test ecx, 0xffffff00
        je L_6637
        mov ecx, 0xff
L_6637:
        mov ebp, dword ptr [eax]
        mov byte ptr [edi], cl
        xor ebx, ebx
        mov bl, byte ptr [edi + 1]
        mov ecx, ebp
        sar ecx, 2
        and ecx, 0xf8
        add ecx, ebx
        test ecx, 0xffffff00
        je L_665a
        mov ecx, 0xff
L_665a:
        mov byte ptr [edi + 1], cl
        xor ecx, ecx
        mov cl, byte ptr [edi + 2]
        sar ebp, 7
        and ebp, 0xf8
        add ebp, ecx
        test ebp, 0xffffff00
        mov ecx, 0xff
        jne L_667c
        mov ecx, ebp
L_667c:
        mov byte ptr [edi + 2], cl
        add edi, 4
        sub eax, edx
        dec esi
        jne L_661c
        jmp L_6a25
L_668c:
        cmp ebx, esi
        mov edx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [edx + 0x24]
        mov ecx, dword ptr [ecx + 0x20]
        jge L_6a25
        sub esi, ebx
L_66a0:
        xor edx, edx
        mov dl, byte ptr [eax]
        mov ebp, dword ptr [eax]
        xor ebx, ebx
        mov bl, byte ptr [edi]
        add edi, 4
        add eax, ecx
        and edx, 0x1f
        shl edx, 3
        imul edx, ebx
        sar edx, 8
        mov byte ptr [edi - 4], dl
        xor ebx, ebx
        mov bl, byte ptr [edi - 3]
        mov edx, ebp
        sar edx, 2
        and edx, 0xf8
        imul edx, ebx
        sar edx, 8
        mov byte ptr [edi - 3], dl
        xor ebx, ebx
        mov bl, byte ptr [edi - 2]
        mov edx, ebp
        sar edx, 7
        and edx, 0xf8
        imul edx, ebx
        sar edx, 8
        dec esi
        mov byte ptr [edi - 2], dl
        jne L_66a0
        jmp L_6a25
L_66f8:
        cmp ebx, esi
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [ecx + 0x24]
        mov ecx, dword ptr [edx + 0x20]
        jge L_6a25
        sub esi, ebx
L_670c:
        xor edx, edx
        mov dl, byte ptr [eax]
        mov ebp, dword ptr [eax]
        xor ebx, ebx
        mov bl, byte ptr [edi]
        add edi, 4
        sub eax, ecx
        and edx, 0x1f
        shl edx, 3
        imul edx, ebx
        sar edx, 8
        mov byte ptr [edi - 4], dl
        xor ebx, ebx
        mov bl, byte ptr [edi - 3]
        mov edx, ebp
        sar edx, 2
        and edx, 0xf8
        imul edx, ebx
        sar edx, 8
        mov byte ptr [edi - 3], dl
        xor ebx, ebx
        mov bl, byte ptr [edi - 2]
        mov edx, ebp
        sar edx, 7
        and edx, 0xf8
        imul edx, ebx
        sar edx, 8
        dec esi
        mov byte ptr [edi - 2], dl
        jne L_670c
        jmp L_6a25
L_6764:
        mov eax, dword ptr [esp + 0x858]
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006d82f0
        jmp L_6a22
L_677a:
        mov ecx, dword ptr [esp + 0x858]
        push ecx
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006d8550
        jmp L_6a22
L_6790:
        lea eax, [ecx - 0x104]
        cmp eax, 0x4c
        ja L_6a25
        xor edx, edx
        mov dl, byte ptr [eax + 0x6d6d68]
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x48
        __emit 0x6D
        __emit 0x6D
        __emit 0x00
L_67ae:
        mov eax, dword ptr [esp + 0x858]
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006d87c0
        jmp L_6a22
L_67c4:
        mov ecx, dword ptr [esp + 0x858]
        push ecx
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006d8a00
        jmp L_6a22
L_67da:
        mov edx, dword ptr [esp + 0x858]
        push edx
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006d94e0
        jmp L_6a22
L_67f0:
        mov eax, dword ptr [esp + 0x858]
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006d98b0
        jmp L_6a22
L_6806:
        mov ecx, dword ptr [esp + 0x858]
        push ecx
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006d9c90
        jmp L_6a22
L_681c:
        mov edx, dword ptr [esp + 0x858]
        push edx
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006da460
        jmp L_6a22
L_6832:
        mov eax, dword ptr [esp + 0x858]
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006da070
        jmp L_6a22
L_6848:
        mov ecx, dword ptr [esp + 0x858]
        push ecx
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006da830
        jmp L_6a22
L_685e:
        cmp ecx, 0x201
        jg L_695e
        je L_6939
        lea eax, [ecx - 0x154]
        cmp eax, 0xac
        ja L_6a25
        xor edx, edx
        mov dl, byte ptr [eax + 0x6d6dd8]
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0xB8
        __emit 0x6D
        __emit 0x6D
        __emit 0x00
L_6890:
        mov eax, dword ptr [esp + 0x858]
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dac00
        jmp L_6a22
L_68a6:
        mov ecx, dword ptr [esp + 0x858]
        push ecx
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dafd0
        jmp L_6a22
L_68bc:
        mov edx, dword ptr [esp + 0x858]
        push edx
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006db380
        jmp L_6a22
L_68d2:
        mov eax, dword ptr [esp + 0x858]
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006db470
        jmp L_6a22
L_68e8:
        mov ecx, dword ptr [esp + 0x858]
        push ecx
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006d8c60
        jmp L_6a22
L_68fe:
        mov edx, dword ptr [esp + 0x858]
        push edx
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006d9090
        jmp L_6a22
L_6914:
        mov eax, dword ptr [esp + 0x858]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        push eax
        push esi
        push ebx
        push ecx
        add ebx, edx
        push ebx
        push edi
        push ebp
        call FUN_006db560
        add esp, 0x1c
        jmp L_6a25
L_6939:
        mov eax, dword ptr [esp + 0x858]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        push eax
        push esi
        push ebx
        push ecx
        add ebx, edx
        push ebx
        push edi
        push ebp
        call FUN_006db8f0
        add esp, 0x1c
        jmp L_6a25
L_695e:
        lea eax, [ecx - 0x204]
        cmp eax, 0x81
        ja L_6a25
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x6d6ea8]
        __emit 0xFF
        __emit 0x24
        __emit 0x8D
        __emit 0x88
        __emit 0x6E
        __emit 0x6D
        __emit 0x00
L_697e:
        mov edx, dword ptr [esp + 0x858]
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x14]
        push edx
        push esi
        push ebx
        push eax
        add ebx, ecx
        push ebx
        push edi
        push ebp
        call FUN_006dbc90
        add esp, 0x1c
        jmp L_6a25
L_69a3:
        mov edx, dword ptr [esp + 0x858]
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x14]
        push edx
        push esi
        push ebx
        push eax
        add ebx, ecx
        push ebx
        push edi
        push ebp
        call FUN_006dc010
        add esp, 0x1c
        jmp L_6a25
L_69c5:
        mov edx, dword ptr [esp + 0x858]
        push edx
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dc790
        jmp L_6a22
L_69d8:
        mov eax, dword ptr [esp + 0x858]
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dc890
        jmp L_6a22
L_69eb:
        mov ecx, dword ptr [esp + 0x858]
        push ecx
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dc990
        jmp L_6a22
L_69fe:
        mov edx, dword ptr [esp + 0x858]
        push edx
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dca90
        jmp L_6a22
L_6a11:
        mov eax, dword ptr [esp + 0x858]
        push eax
        push esi
        push ebx
        push edi
        push ebp
        call FUN_006dc3b0
L_6a22:
        add esp, 0x14
L_6a25:
        mov ecx, dword ptr [esp + 0x20]
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        mov dword ptr [esp + 0x20], eax
        jne L_60ac
        mov ebx, dword ptr [esp + 0x24]
L_6a3c:
        mov ecx, dword ptr [esp + 0x858]
        mov eax, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x34]
        sar eax, cl
        mov edi, edx
        lea esi, [esp + 0x48]
        shl eax, 2
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        add edx, eax
        rep movsb
        mov edi, dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0x34], edx
        xor ebp, ebp
L_6a72:
        cmp ebx, ebp
        je L_6ac2
        mov eax, ebx
L_6a78:
        mov edx, dword ptr [eax + 4]
        dec edx
        mov ecx, edx
        cmp ecx, ebp
        mov dword ptr [eax + 4], edx
        jg L_6ab7
        cmp eax, ebx
        jne L_6a93
        mov ebx, dword ptr [eax + 8]
        cmp ebx, ebp
        je L_6a93
        mov dword ptr [ebx + 0xc], ebp
L_6a93:
        mov ecx, dword ptr [eax + 0xc]
        cmp ecx, ebp
        je L_6aa0
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
L_6aa0:
        mov esi, dword ptr [eax + 8]
        cmp esi, ebp
        je L_6aaa
        mov dword ptr [esi + 0xc], ecx
L_6aaa:
        push eax
        call FUN_004084e0
        add esp, 4
        mov eax, esi
        jmp L_6aba
L_6ab7:
        mov eax, dword ptr [eax + 8]
L_6aba:
        cmp eax, ebp
        jne L_6a78
        mov dword ptr [esp + 0x24], ebx
L_6ac2:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x28]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 0x1c], eax
        jl L_5fcc
        cmp ebx, ebp
        je L_6b13
        mov ecx, dword ptr [ebx + 8]
        cmp ecx, ebp
        mov eax, ebx
        je L_6aed
L_6ae4:
        mov eax, ecx
        mov ecx, dword ptr [eax + 8]
        cmp ecx, ebp
        jne L_6ae4
L_6aed:
        cmp dword ptr [eax + 0xc], ebp
        je L_6b0a
L_6af2:
        mov esi, dword ptr [eax + 0xc]
        push eax
        call FUN_004084e0
        mov ecx, dword ptr [esi + 0xc]
        add esp, 4
        cmp ecx, ebp
        mov eax, esi
        mov dword ptr [esi + 8], ebp
        jne L_6af2
L_6b0a:
        push eax
        call FUN_004084e0
        add esp, 4
L_6b13:
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x838
        ret 0x14
L_6b22:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x838
        ret 0x14
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        __emit 0x48
        __emit 0x62
        __emit 0x6D
        __emit 0x00
        __emit 0x57
        __emit 0x62
        __emit 0x6D
        __emit 0x00
        __emit 0x66
        __emit 0x62
        __emit 0x6D
        __emit 0x00
        __emit 0x75
        __emit 0x62
        __emit 0x6D
        __emit 0x00
        __emit 0x84
        __emit 0x62
        __emit 0x6D
        __emit 0x00
        __emit 0x93
        __emit 0x62
        __emit 0x6D
        __emit 0x00
        __emit 0x25
        __emit 0x6A
        __emit 0x6D
        __emit 0x00
        __emit 0x00
        __emit 0x01
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x02
        __emit 0x03
        __emit 0x06
        __emit 0x06
        __emit 0x04
        __emit 0x05
        __emit 0x8B
        __emit 0xFF
        __emit 0xE4
        __emit 0x62
        __emit 0x6D
        __emit 0x00
        __emit 0xF3
        __emit 0x62
        __emit 0x6D
        __emit 0x00
        __emit 0x02
        __emit 0x63
        __emit 0x6D
        __emit 0x00
        __emit 0x11
        __emit 0x63
        __emit 0x6D
        __emit 0x00
        __emit 0x2F
        __emit 0x63
        __emit 0x6D
        __emit 0x00
        __emit 0x4D
        __emit 0x63
        __emit 0x6D
        __emit 0x00
        __emit 0x25
        __emit 0x6A
        __emit 0x6D
        __emit 0x00
        __emit 0x00
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x01
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x02
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x06
        __emit 0x03
        __emit 0x04
        __emit 0x06
        __emit 0x06
        __emit 0x05
        __emit 0xE3
        __emit 0x63
        __emit 0x6D
        __emit 0x00
        __emit 0xA7
        __emit 0x63
        __emit 0x6D
        __emit 0x00
        __emit 0xB6
        __emit 0x63
        __emit 0x6D
        __emit 0x00
        __emit 0xC5
        __emit 0x63
        __emit 0x6D
        __emit 0x00
        __emit 0xD4
        __emit 0x63
        __emit 0x6D
        __emit 0x00
        __emit 0x25
        __emit 0x6A
        __emit 0x6D
        __emit 0x00
        __emit 0x00
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x01
        __emit 0x02
        __emit 0x05
        __emit 0x05
        __emit 0x03
        __emit 0x04
        __emit 0x8B
        __emit 0xFF
        __emit 0xC3
        __emit 0x64
        __emit 0x6D
        __emit 0x00
        __emit 0x27
        __emit 0x65
        __emit 0x6D
        __emit 0x00
        __emit 0x8B
        __emit 0x65
        __emit 0x6D
        __emit 0x00
        __emit 0x08
        __emit 0x66
        __emit 0x6D
        __emit 0x00
        __emit 0x8C
        __emit 0x66
        __emit 0x6D
        __emit 0x00
        __emit 0xF8
        __emit 0x66
        __emit 0x6D
        __emit 0x00
        __emit 0x64
        __emit 0x67
        __emit 0x6D
        __emit 0x00
        __emit 0x25
        __emit 0x6A
        __emit 0x6D
        __emit 0x00
        __emit 0x00
        __emit 0x01
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x02
        __emit 0x03
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x04
        __emit 0x05
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x06
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        __emit 0xAE
        __emit 0x67
        __emit 0x6D
        __emit 0x00
        __emit 0xC4
        __emit 0x67
        __emit 0x6D
        __emit 0x00
        __emit 0xDA
        __emit 0x67
        __emit 0x6D
        __emit 0x00
        __emit 0xF0
        __emit 0x67
        __emit 0x6D
        __emit 0x00
        __emit 0x06
        __emit 0x68
        __emit 0x6D
        __emit 0x00
        __emit 0x1C
        __emit 0x68
        __emit 0x6D
        __emit 0x00
        __emit 0x32
        __emit 0x68
        __emit 0x6D
        __emit 0x00
        __emit 0x25
        __emit 0x6A
        __emit 0x6D
        __emit 0x00
        __emit 0x00
        __emit 0x01
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x02
        __emit 0x03
        __emit 0x07
        __emit 0x07
        __emit 0x04
        __emit 0x05
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x06
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        __emit 0x90
        __emit 0x68
        __emit 0x6D
        __emit 0x00
        __emit 0xA6
        __emit 0x68
        __emit 0x6D
        __emit 0x00
        __emit 0xBC
        __emit 0x68
        __emit 0x6D
        __emit 0x00
        __emit 0xD2
        __emit 0x68
        __emit 0x6D
        __emit 0x00
        __emit 0xE8
        __emit 0x68
        __emit 0x6D
        __emit 0x00
        __emit 0xFE
        __emit 0x68
        __emit 0x6D
        __emit 0x00
        __emit 0x14
        __emit 0x69
        __emit 0x6D
        __emit 0x00
        __emit 0x25
        __emit 0x6A
        __emit 0x6D
        __emit 0x00
        __emit 0x00
        __emit 0x01
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x02
        __emit 0x03
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x04
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x05
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x06
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        __emit 0x7E
        __emit 0x69
        __emit 0x6D
        __emit 0x00
        __emit 0xA3
        __emit 0x69
        __emit 0x6D
        __emit 0x00
        __emit 0x11
        __emit 0x6A
        __emit 0x6D
        __emit 0x00
        __emit 0xC5
        __emit 0x69
        __emit 0x6D
        __emit 0x00
        __emit 0xD8
        __emit 0x69
        __emit 0x6D
        __emit 0x00
        __emit 0xEB
        __emit 0x69
        __emit 0x6D
        __emit 0x00
        __emit 0xFE
        __emit 0x69
        __emit 0x6D
        __emit 0x00
        __emit 0x25
        __emit 0x6A
        __emit 0x6D
        __emit 0x00
        __emit 0x00
        __emit 0x01
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x02
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x07
        __emit 0x03
        __emit 0x04
        __emit 0x07
        __emit 0x07
        __emit 0x05
        __emit 0x06
    }
}
