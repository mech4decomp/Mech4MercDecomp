/*
 * FUN_006C0940 (2464 B) — Recursive-descent expression/string parser.
 *
 * __cdecl, no args, returns pointer (EAX).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* ---- extern data symbols ---- */
extern unsigned int  g_82f328;   /* 0x0082f328 (input pointer) */
extern unsigned int  g_82f320;   /* 0x0082f320 */
extern unsigned int  g_82f3e4;   /* 0x0082f3e4 */
extern unsigned char g_896b88[]; /* 0x00896b88 char-class table */
extern unsigned char g_79ced0;   /* 0x0079ced0 string */
extern unsigned char g_79ce7c;   /* 0x0079ce7c string */
extern unsigned char g_79ce28;   /* 0x0079ce28 string */
extern unsigned char g_79cddc;   /* 0x0079cddc string */
extern unsigned char g_79cda8;   /* 0x0079cda8 string */
extern unsigned char g_79cd7c;   /* 0x0079cd7c string */
extern unsigned char g_79cd40;   /* 0x0079cd40 string */
extern unsigned char g_79cd04;   /* 0x0079cd04 string */
extern unsigned char g_79ccbc;   /* 0x0079ccbc string */
extern void *g_76b420;           /* 0x0076b420 (fn ptr) */
extern void *g_76b3c0;           /* 0x0076b3c0 (fn ptr) */
extern void *g_76b3c4;           /* 0x0076b3c4 (fn ptr) */

/* ---- extern function symbols ---- */
extern void __cdecl FUN_0075dc00(void);
extern void __cdecl FUN_006bfa50(void);
extern void __cdecl FUN_006c0940(void);
extern void __cdecl FUN_006c3450(void);
extern void __cdecl FUN_0072d980(void);
extern void __cdecl FUN_0072dd70(void);
extern void __cdecl FUN_00723a70(void);
extern void __cdecl FUN_006c12e0(void);

__declspec(naked) void __cdecl FUN_006c0940(void)
{
    __asm {
        mov     eax, 0x1010
        call    FUN_0075dc00
        mov     eax, dword ptr [g_82f328]
        push    ebx
        push    ebp
        lea     ecx, [esp + 0x18]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x14], ecx
        mov     byte ptr [esp + 0x13], 0x0
        mov     ebx, ecx
        jmp     loc_6C097D
loc_6C0968:
        push    ebx
        call    dword ptr [g_76b420]
        add     esp, 0xc
loc_6C0972:
        add     ebx, eax
loc_6C0974:
        mov     dword ptr [esp + 0x14], ebx
loc_6C0978:
        mov     eax, dword ptr [g_82f328]
loc_6C097D:
        cmp     byte ptr [eax], 0x20
        jnz     loc_6C0990
loc_6C0982:
        mov     cl, byte ptr [eax + 0x1]
        inc     eax
        cmp     cl, 0x20
        jz      loc_6C0982
        mov     dword ptr [g_82f328], eax
loc_6C0990:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x29
        jz      loc_6C126E
        cmp     cl, 0x2c
        jz      loc_6C126E
        test    cl, cl
        jz      loc_6C126E
        cmp     cl, 0x22
        jnz     loc_6C0A81
        mov     byte ptr [esp + 0x13], 0x1
loc_6C09BA:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C09C0:
        lea     edx, [esp + 0x101f]
        cmp     ebx, edx
        jc      loc_6C09DD
        push    0x79cbf4
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
loc_6C09DD:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x22
        jz      loc_6C0A72
        test    cl, cl
        jnz     loc_6C09FE
        push    0x79cbe4
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
loc_6C09FE:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x5c
        jnz     loc_6C0A6A
        mov     cl, byte ptr [eax + 0x1]
        inc     eax
        cmp     cl, 0x22
        mov     dword ptr [g_82f328], eax
        jnz     loc_6C0A1E
        inc     eax
        mov     byte ptr [ebx], cl
        mov     dword ptr [g_82f328], eax
        inc     ebx
        jmp     loc_6C09C0
loc_6C0A1E:
        cmp     cl, 0x6e
        jnz     loc_6C0A2F
        inc     eax
        mov     byte ptr [ebx], 0xd
        mov     dword ptr [g_82f328], eax
        inc     ebx
        jmp     loc_6C09C0
loc_6C0A2F:
        cmp     cl, 0x74
        jnz     loc_6C0A40
        inc     eax
        mov     byte ptr [ebx], 0x9
        mov     dword ptr [g_82f328], eax
        inc     ebx
        jmp     loc_6C09C0
loc_6C0A40:
        cmp     cl, 0x5c
        jnz     loc_6C0A53
        inc     eax
        mov     byte ptr [ebx], cl
        mov     dword ptr [g_82f328], eax
        inc     ebx
        jmp     loc_6C09C0
loc_6C0A53:
        push    0x79ced8
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
        jmp     loc_6C09C0
loc_6C0A6A:
        mov     byte ptr [ebx], cl
        inc     ebx
        jmp     loc_6C09BA
loc_6C0A72:
        inc     eax
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [g_82f328], eax
        jmp     loc_6C097D
loc_6C0A81:
        cmp     cl, 0x20
        jnz     loc_6C0A8C
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0A8C:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x22
        jnz     loc_6C0A9E
        inc     eax
        mov     dword ptr [g_82f328], eax
        jmp     loc_6C097D
loc_6C0A9E:
        test    cl, cl
        jz      loc_6C126E
        cmp     cl, 0x2c
        jz      loc_6C126E
        mov     cl, byte ptr [g_79ced0]
        test    cl, cl
        mov     esi, 0x79ced0
        jz      loc_6C0AD5
loc_6C0ABE:
        mov     edi, eax
        sub     edi, esi
loc_6C0AC2:
        mov     cl, byte ptr [edi + esi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     loc_6C0BAC
        cmp     byte ptr [esi], 0x0
        jnz     loc_6C0AC2
loc_6C0AD5:
        mov     cl, byte ptr [eax + 0x5]
        add     eax, 0x5
        cmp     cl, 0x20
        mov     byte ptr [esp + 0x13], 0x1
        mov     dword ptr [g_82f328], eax
        jnz     loc_6C0AF0
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0AF0:
        cmp     byte ptr [eax], 0x28
        jz      loc_6C0B04
        push    0x79ceb8
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C0B0A
loc_6C0B04:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0B0A:
        call    FUN_006c0940
        mov     esi, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jnz     loc_6C0B21
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0B21:
        cmp     byte ptr [eax], 0x2c
        jz      loc_6C0B35
        push    0x79ce9c
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C0B3B
loc_6C0B35:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0B3B:
        call    FUN_006c3450
        mov     edi, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jnz     loc_6C0B52
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0B52:
        cmp     byte ptr [eax], 0x29
        jz      loc_6C0B66
        push    0x79ce84
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C0B6C
loc_6C0B66:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0B6C:
        push    esi
        call    dword ptr [g_76b3c0]
        add     esp, 0x4
        cmp     edi, eax
        jle     loc_6C0B7C
        mov     edi, eax
loc_6C0B7C:
        test    edi, edi
        jle     loc_6C0978
loc_6C0B84:
        xor     eax, eax
        mov     al, byte ptr [esi]
        mov     ecx, eax
        and     ecx, 0xff
        mov     dl, byte ptr [ecx + g_896b88]
        test    dl, dl
        jz      loc_6C0B9E
        mov     byte ptr [ebx], al
        inc     ebx
        inc     esi
loc_6C0B9E:
        mov     dl, byte ptr [esi]
        mov     byte ptr [ebx], dl
        inc     ebx
        inc     esi
        dec     edi
        jnz     loc_6C0B84
        jmp     loc_6C0974
loc_6C0BAC:
        mov     cl, byte ptr [g_79ce7c]
        test    cl, cl
        mov     esi, 0x79ce7c
        jz      loc_6C0BD2
loc_6C0BBB:
        mov     edi, eax
        sub     edi, esi
loc_6C0BBF:
        mov     cl, byte ptr [esi + edi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     loc_6C0CC0
        cmp     byte ptr [esi], 0x0
        jnz     loc_6C0BBF
loc_6C0BD2:
        mov     cl, byte ptr [eax + 0x6]
        add     eax, 0x6
        cmp     cl, 0x20
        mov     byte ptr [esp + 0x13], 0x1
        mov     dword ptr [g_82f328], eax
        jnz     loc_6C0BED
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0BED:
        cmp     byte ptr [eax], 0x28
        jz      loc_6C0C01
        push    0x79ce64
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C0C07
loc_6C0C01:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0C07:
        call    FUN_006c0940
        mov     esi, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jnz     loc_6C0C1E
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0C1E:
        cmp     byte ptr [eax], 0x2c
        jz      loc_6C0C32
        push    0x79ce48
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C0C38
loc_6C0C32:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0C38:
        call    FUN_006c3450
        mov     edi, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jnz     loc_6C0C4F
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0C4F:
        cmp     byte ptr [eax], 0x29
        jz      loc_6C0C63
        push    0x79ce30
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C0C69
loc_6C0C63:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0C69:
        push    esi
        call    dword ptr [g_76b3c0]
        add     esp, 0x4
        cmp     edi, eax
        jle     loc_6C0C79
        sub     edi, eax
loc_6C0C79:
        sub     eax, edi
        test    eax, eax
        jle     loc_6C0C90
loc_6C0C7F:
        mov     ebp, eax
loc_6C0C81:
        push    esi
        call    dword ptr [g_76b3c4]
        add     esp, 0x4
        dec     ebp
        mov     esi, eax
        jnz     loc_6C0C81
loc_6C0C90:
        test    edi, edi
        jle     loc_6C0978
loc_6C0C98:
        xor     eax, eax
        mov     al, byte ptr [esi]
        mov     ecx, eax
        and     ecx, 0xff
        mov     dl, byte ptr [ecx + g_896b88]
        test    dl, dl
        jz      loc_6C0CB2
        mov     byte ptr [ebx], al
        inc     ebx
        inc     esi
loc_6C0CB2:
        mov     dl, byte ptr [esi]
        mov     byte ptr [ebx], dl
        inc     ebx
        inc     esi
        dec     edi
        jnz     loc_6C0C98
        jmp     loc_6C0974
loc_6C0CC0:
        mov     cl, byte ptr [g_79ce28]
        test    cl, cl
        mov     esi, 0x79ce28
        jz      loc_6C0CE6
loc_6C0CCF:
        mov     edi, eax
        sub     edi, esi
loc_6C0CD3:
        mov     cl, byte ptr [esi + edi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     loc_6C0DF6
        cmp     byte ptr [esi], 0x0
        jnz     loc_6C0CD3
loc_6C0CE6:
        mov     cl, byte ptr [eax + 0x4]
        add     eax, 0x4
        cmp     cl, 0x20
        mov     byte ptr [esp + 0x13], 0x1
        mov     dword ptr [g_82f328], eax
        jnz     loc_6C0D01
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0D01:
        cmp     byte ptr [eax], 0x28
        jz      loc_6C0D15
        push    0x79ce14
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C0D1B
loc_6C0D15:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0D1B:
        call    FUN_006c0940
        mov     esi, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jnz     loc_6C0D32
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0D32:
        cmp     byte ptr [eax], 0x2c
        jz      loc_6C0D46
        push    0x79cdfc
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C0D4C
loc_6C0D46:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0D4C:
        call    FUN_006c3450
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x2c
        jz      loc_6C0D6E
        push    0x79cdfc
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C0D74
loc_6C0D6E:
        inc     dword ptr [g_82f328]
loc_6C0D74:
        call    FUN_006c3450
        mov     ebp, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x29
        jz      loc_6C0D99
        push    0x79cde4
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
        jmp     loc_6C0D9F
loc_6C0D99:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0D9F:
        mov     ecx, dword ptr [esp + 0x18]
        test    ecx, ecx
        jle     loc_6C0DBD
loc_6C0DA7:
        mov     edi, ecx
loc_6C0DA9:
        push    esi
        call    dword ptr [g_76b3c4]
        add     esp, 0x4
        dec     edi
        mov     esi, eax
        jnz     loc_6C0DA9
        mov     eax, dword ptr [g_82f328]
loc_6C0DBD:
        mov     ecx, dword ptr [esp + 0x18]
        cmp     ecx, ebp
        jge     loc_6C097D
        sub     ebp, ecx
loc_6C0DCB:
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        mov     edx, ecx
        and     edx, 0xff
        cmp     byte ptr [edx + g_896b88], 0x0
        jz      loc_6C0DE4
        mov     byte ptr [ebx], cl
        inc     ebx
        inc     esi
loc_6C0DE4:
        mov     cl, byte ptr [esi]
        mov     byte ptr [ebx], cl
        inc     ebx
        inc     esi
        dec     ebp
        jnz     loc_6C0DCB
        mov     dword ptr [esp + 0x14], ebx
        jmp     loc_6C097D
loc_6C0DF6:
        mov     cl, byte ptr [g_79cddc]
        test    cl, cl
        mov     esi, 0x79cddc
        jz      loc_6C0E1C
loc_6C0E05:
        mov     edi, eax
        sub     edi, esi
loc_6C0E09:
        mov     dl, byte ptr [esi + edi]
        mov     cl, byte ptr [esi]
        inc     esi
        cmp     dl, cl
        jnz     loc_6C0EA7
        cmp     byte ptr [esi], 0x0
        jnz     loc_6C0E09
loc_6C0E1C:
        mov     cl, byte ptr [eax + 0x4]
        add     eax, 0x4
        cmp     cl, 0x20
        mov     byte ptr [esp + 0x13], 0x1
        mov     dword ptr [g_82f328], eax
        jnz     loc_6C0E37
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0E37:
        cmp     byte ptr [eax], 0x28
        jz      loc_6C0E4B
        push    0x79cdc8
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C0E51
loc_6C0E4B:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0E51:
        call    FUN_006c3450
        mov     ebx, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x29
        jz      loc_6C0E76
        push    0x79cdb4
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
        jmp     loc_6C0E7C
loc_6C0E76:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0E7C:
        mov     ecx, ebx
        sar     ecx, 0x8
        mov     edx, ecx
        and     edx, 0xff
        cmp     byte ptr [edx + g_896b88], 0x0
        mov     edx, dword ptr [esp + 0x14]
        jz      loc_6C0E99
        mov     byte ptr [edx], cl
        inc     edx
loc_6C0E99:
        mov     byte ptr [edx], bl
        inc     edx
        mov     dword ptr [esp + 0x14], edx
        mov     ebx, edx
        jmp     loc_6C097D
loc_6C0EA7:
        mov     cl, byte ptr [g_79cda8]
        test    cl, cl
        mov     esi, 0x79cda8
        jz      loc_6C0EC9
loc_6C0EB6:
        mov     edi, eax
        sub     edi, esi
loc_6C0EBA:
        mov     cl, byte ptr [esi + edi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     loc_6C0F3D
        cmp     byte ptr [esi], 0x0
        jnz     loc_6C0EBA
loc_6C0EC9:
        mov     cl, byte ptr [eax + 0x9]
        add     eax, 0x9
        cmp     cl, 0x20
        mov     byte ptr [esp + 0x13], 0x1
        mov     dword ptr [g_82f328], eax
        jnz     loc_6C0EE4
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0EE4:
        cmp     byte ptr [eax], 0x28
        jz      loc_6C0EF8
        push    0x79cd84
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C0EFE
loc_6C0EF8:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0EFE:
        call    FUN_006c3450
        mov     esi, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x29
        jz      loc_6C0F1E
        push    0x79cd84
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C0F24
loc_6C0F1E:
        inc     dword ptr [g_82f328]
loc_6C0F24:
        mov     eax, dword ptr [g_82f3e4]
        test    eax, eax
        jz      loc_6C123E
        push    esi
        push    eax
        call    FUN_0072d980
        jmp     loc_6C11AF
loc_6C0F3D:
        mov     cl, byte ptr [g_79cd7c]
        test    cl, cl
        mov     esi, 0x79cd7c
        jz      loc_6C0F5F
loc_6C0F4C:
        mov     edi, eax
        sub     edi, esi
loc_6C0F50:
        mov     cl, byte ptr [esi + edi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     loc_6C0FD3
        cmp     byte ptr [esi], 0x0
        jnz     loc_6C0F50
loc_6C0F5F:
        mov     cl, byte ptr [eax + 0x5]
        add     eax, 0x5
        cmp     cl, 0x20
        mov     byte ptr [esp + 0x13], 0x1
        mov     dword ptr [g_82f328], eax
        jnz     loc_6C0F7A
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0F7A:
        cmp     byte ptr [eax], 0x28
        jz      loc_6C0F8E
        push    0x79cd64
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C0F94
loc_6C0F8E:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C0F94:
        call    FUN_006c3450
        mov     esi, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x29
        jz      loc_6C0FBD
        push    0x79cd4c
        call    FUN_006bfa50
        add     esp, 0x4
        push    esi
        push    0x76b9a8
        jmp     loc_6C0968
loc_6C0FBD:
        mov     eax, dword ptr [g_82f328]
        inc     eax
        push    esi
        mov     dword ptr [g_82f328], eax
        push    0x76b9a8
        jmp     loc_6C0968
loc_6C0FD3:
        mov     cl, byte ptr [g_79cd40]
        test    cl, cl
        mov     esi, 0x79cd40
        jz      loc_6C0FF9
loc_6C0FE2:
        mov     edi, eax
        sub     edi, esi
loc_6C0FE6:
        mov     cl, byte ptr [esi + edi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     loc_6C1079
        cmp     byte ptr [esi], 0x0
        jnz     loc_6C0FE6
loc_6C0FF9:
        mov     cl, byte ptr [eax + 0x8]
        add     eax, 0x8
        cmp     cl, 0x20
        mov     byte ptr [esp + 0x13], 0x1
        mov     dword ptr [g_82f328], eax
        jnz     loc_6C1014
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C1014:
        cmp     byte ptr [eax], 0x28
        jz      loc_6C1028
        push    0x79cd28
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C102E
loc_6C1028:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C102E:
        call    FUN_006c3450
        mov     esi, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x29
        jz      loc_6C105D
        push    0x79cd10
        call    FUN_006bfa50
        add     esp, 0x4
        push    esi
        call    FUN_00723a70
        push    eax
        push    0x76c690
        jmp     loc_6C0968
loc_6C105D:
        mov     eax, dword ptr [g_82f328]
        inc     eax
        push    esi
        mov     dword ptr [g_82f328], eax
        call    FUN_00723a70
        push    eax
        push    0x76c690
        jmp     loc_6C0968
loc_6C1079:
        mov     cl, byte ptr [g_79cd04]
        test    cl, cl
        mov     esi, 0x79cd04
        jz      loc_6C109B
loc_6C1088:
        mov     edi, eax
        sub     edi, esi
loc_6C108C:
        mov     cl, byte ptr [esi + edi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     loc_6C1115
        cmp     byte ptr [esi], 0x0
        jnz     loc_6C108C
loc_6C109B:
        mov     cl, byte ptr [eax + 0x9]
        add     eax, 0x9
        cmp     cl, 0x20
        mov     byte ptr [esp + 0x13], 0x1
        mov     dword ptr [g_82f328], eax
        jnz     loc_6C10B6
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C10B6:
        cmp     byte ptr [eax], 0x28
        jz      loc_6C10CA
        push    0x79cce8
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C10D0
loc_6C10CA:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C10D0:
        call    FUN_006c0940
        mov     esi, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jnz     loc_6C10E7
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C10E7:
        cmp     byte ptr [eax], 0x29
        jz      loc_6C1104
        push    0x79cccc
        call    FUN_006bfa50
        add     esp, 0x4
        push    esi
        push    0x76c690
        jmp     loc_6C11A7
loc_6C1104:
        inc     eax
        push    esi
        mov     dword ptr [g_82f328], eax
        push    0x76c690
        jmp     loc_6C11A7
loc_6C1115:
        mov     cl, byte ptr [g_79ccbc]
        test    cl, cl
        mov     esi, 0x79ccbc
        jz      loc_6C113B
loc_6C1124:
        mov     edi, eax
        sub     edi, esi
loc_6C1128:
        mov     cl, byte ptr [esi + edi]
        mov     dl, byte ptr [esi]
        inc     esi
        cmp     cl, dl
        jnz     loc_6C11E2
        cmp     byte ptr [esi], 0x0
        jnz     loc_6C1128
loc_6C113B:
        mov     cl, byte ptr [eax + 0xc]
        add     eax, 0xc
        cmp     cl, 0x20
        mov     byte ptr [esp + 0x13], 0x1
        mov     dword ptr [g_82f328], eax
        jnz     loc_6C1156
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C1156:
        cmp     byte ptr [eax], 0x28
        jz      loc_6C116A
        push    0x79cca0
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C1170
loc_6C116A:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C1170:
        call    FUN_006c3450
        mov     esi, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jnz     loc_6C1187
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C1187:
        cmp     byte ptr [eax], 0x29
        jz      loc_6C119B
        push    0x79cc80
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C11A1
loc_6C119B:
        inc     eax
        mov     dword ptr [g_82f328], eax
loc_6C11A1:
        push    esi
        push    0x76b9a8
loc_6C11A7:
        call    FUN_0072dd70
        add     esp, 0x8
loc_6C11AF:
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     edi, ebx
        mov     esi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        add     ebx, ecx
        jmp     loc_6C0974
loc_6C11E2:
        call    FUN_006c12e0
        cmp     eax, 0x65
        jnz     loc_6C1224
        mov     ecx, dword ptr [g_82f320]
        mov     esi, dword ptr [ecx]
        test    esi, esi
        mov     byte ptr [esp + 0x13], 0x1
        jz      loc_6C0978
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     edi, ebx
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        jmp     loc_6C0972
loc_6C1224:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      loc_6C1258
        push    0x79cc2c
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     loc_6C0978
loc_6C123E:
        push    0x79cc04
        call    FUN_006bfa50
        add     esp, 0x4
loc_6C124B:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x1010
        ret
loc_6C1258:
        mov     eax, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_82f328], eax
        xor     eax, eax
        pop     ebx
        add     esp, 0x1010
        ret
loc_6C126E:
        lea     ecx, [esp + 0x101f]
        cmp     ebx, ecx
        jc      loc_6C1286
        push    0x79cbf4
        call    FUN_006bfa50
        add     esp, 0x4
loc_6C1286:
        mov     byte ptr [ebx], 0x0
        mov     al, byte ptr [esp + 0x20]
        inc     ebx
        test    al, al
        jnz     loc_6C12B1
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     loc_6C12B1
        mov     edx, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_82f328], edx
        xor     eax, eax
        pop     ebx
        add     esp, 0x1010
        ret
loc_6C12B1:
        mov     ecx, ebx
        lea     eax, [esp + 0x20]
        sub     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        lea     esi, [esp + 0x20]
        mov     edi, 0x838af0
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x838af0
        pop     ebx
        add     esp, 0x1010
        ret
    }
}
