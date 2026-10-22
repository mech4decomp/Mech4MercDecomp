/* FUN_0064db40 - ABL comparison operator dispatch (500 B) */

extern int g_00805908;
extern char *g_00805918;
extern int *g_0080592c;
extern int g_0080d9b0;
extern int g_0080d9b4;
extern int g_0080d9b8;
extern int g_0080d9bc;
extern int g_64dd34;   /* switch jump table (data, outside fn slice) */
extern int g_64dd58;   /* switch jump table (data, outside fn slice) */
extern int g_64dd7c;   /* switch jump table (data, outside fn slice) */

extern int __cdecl FUN_0064d9f0(void);
extern int __cdecl FUN_0064c950(int);

__declspec(naked) void FUN_0064db40(void)
{
    __asm {
        call FUN_0064d9f0
        mov ecx, dword ptr [g_00805908]
        cmp ecx, 14h
        jz loc_64db6d
        cmp ecx, 0fh
        jz loc_64db6d
        cmp ecx, 10h
        jz loc_64db6d
        cmp ecx, 17h
        jz loc_64db6d
        cmp ecx, 15h
        jz loc_64db6d
        cmp ecx, 16h
        jnz loc_64dcde
loc_64db6d:
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov ebx, ecx
        call FUN_0064c950
        mov esi, eax
        mov eax, dword ptr [g_00805918]
        movsx ecx, byte ptr [eax]
        inc eax
        mov dword ptr [g_00805908], ecx
        mov dword ptr [g_00805918], eax
        call FUN_0064d9f0
        push eax
        call FUN_0064c950
        mov edi, dword ptr [g_0080d9bc]
        mov edx, dword ptr [g_0080592c]
        add esp, 8
        cmp esi, edi
        lea ecx, [edx - 4]
        jnz loc_64dbb4
        cmp eax, edi
        jz loc_64dbba
loc_64dbb4:
        cmp dword ptr [esi + 4], 2
        jnz loc_64dc1f
loc_64dbba:
        lea eax, [ebx - 0fh]
        cmp eax, 8
        ja loc_64dcc9
        jmp dword ptr [eax*4 + g_64dd34]
loc_64dbcd:
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx]
loc_64dbd1:
        setz al
loc_64dbd4:
        test al, al
        jz loc_64dcc9
loc_64dbdc:
        mov eax, dword ptr [g_0080d9b0]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ecx], 1
        mov dword ptr [g_0080592c], ecx
        pop ebx
        ret
loc_64dbf2:
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx]
        setl al
        jmp loc_64dbd4
loc_64dbfb:
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx]
        setg al
        jmp loc_64dbd4
loc_64dc04:
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx]
        setnz al
        jmp loc_64dbd4
loc_64dc0d:
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx]
        setle al
        jmp loc_64dbd4
loc_64dc16:
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx]
        setge al
        jmp loc_64dbd4
loc_64dc1f:
        cmp esi, dword ptr [g_0080d9b8]
        jnz loc_64dc78
        lea eax, [ebx - 0fh]
        cmp eax, 8
        ja loc_64dcc9
        jmp dword ptr [eax*4 + g_64dd58]
loc_64dc3a:
        mov al, byte ptr [ecx]
        cmp al, byte ptr [edx]
        jmp loc_64dbd1
loc_64dc40:
        mov al, byte ptr [ecx]
        cmp al, byte ptr [edx]
        setc al
        jmp loc_64dbd4
loc_64dc49:
        mov al, byte ptr [ecx]
        cmp al, byte ptr [edx]
        seta al
        jmp loc_64dbd4
loc_64dc52:
        mov al, byte ptr [ecx]
        cmp al, byte ptr [edx]
        setnz al
        jmp loc_64dbd4
loc_64dc5e:
        mov al, byte ptr [ecx]
        cmp byte ptr [edx], al
        sbb al, al
        inc al
        jmp loc_64dbd4
loc_64dc6b:
        mov al, byte ptr [ecx]
        cmp al, byte ptr [edx]
        sbb al, al
        inc al
        jmp loc_64dbd4
loc_64dc78:
        cmp dword ptr [esi + 4], 3
        jnz loc_64dc8d
        mov ebp, dword ptr [g_0080d9b8]
        cmp dword ptr [esi + 14h], ebp
        jz loc_64dbdc
loc_64dc8d:
        mov ebp, dword ptr [g_0080d9b4]
        cmp esi, ebp
        jz loc_64dc9b
        cmp eax, ebp
        jnz loc_64dcc9
loc_64dc9b:
        cmp esi, edi
        jnz loc_64dca3
        fild dword ptr [ecx]
        fstp dword ptr [ecx]
loc_64dca3:
        cmp eax, edi
        jnz loc_64dcab
        fild dword ptr [edx]
        fstp dword ptr [edx]
loc_64dcab:
        lea eax, [ebx - 0fh]
        cmp eax, 8
        ja loc_64dcc9
        jmp dword ptr [eax*4 + g_64dd7c]
loc_64dcba:
        fld dword ptr [ecx]
        fcomp dword ptr [edx]
        __emit 0xDF   /* fnstsw ax: MSVC6 adds 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jnz loc_64dbdc
loc_64dcc9:
        mov eax, dword ptr [g_0080d9b0]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ecx], 0
        mov dword ptr [g_0080592c], ecx
        pop ebx
loc_64dcde:
        ret
loc_64dcdf:
        fld dword ptr [ecx]
        fcomp dword ptr [edx]
        __emit 0xDF   /* fnstsw ax: MSVC6 adds 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz loc_64dbdc
        jmp loc_64dcc9
loc_64dcf0:
        fld dword ptr [ecx]
        fcomp dword ptr [edx]
        __emit 0xDF   /* fnstsw ax: MSVC6 adds 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz loc_64dbdc
        jmp loc_64dcc9
loc_64dd01:
        fld dword ptr [ecx]
        fcomp dword ptr [edx]
        __emit 0xDF   /* fnstsw ax: MSVC6 adds 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz loc_64dbdc
        jmp loc_64dcc9
loc_64dd12:
        fld dword ptr [ecx]
        fcomp dword ptr [edx]
        __emit 0xDF   /* fnstsw ax: MSVC6 adds 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz loc_64dbdc
        jmp loc_64dcc9
loc_64dd23:
        fld dword ptr [ecx]
        fcomp dword ptr [edx]
        __emit 0xDF   /* fnstsw ax: MSVC6 adds 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz loc_64dbdc
        jmp loc_64dcc9
    }
}
