/*
 * FUN_00626970 (1031 B) — __fastcall constructor. Allocates and
 * initializes ~23 sub-objects via FUN_004084d0 + per-type constructors,
 * storing each into ESI+offset and calling FUN_006285a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006285a0(void);
extern void __cdecl FUN_00670e10(void);
extern void __cdecl FUN_00641200(void);
extern void __cdecl FUN_006428a0(void);
extern void __cdecl FUN_00643a30(void);
extern void __cdecl FUN_00644de0(void);
extern void __cdecl FUN_00644fd0(void);
extern void __cdecl FUN_006458d0(void);
extern void __cdecl FUN_00645d70(void);
extern void __cdecl FUN_00646260(void);
extern void __cdecl FUN_0063d560(void);
extern void __cdecl FUN_0063f010(void);
extern void __cdecl FUN_0063bff0(void);
extern void __cdecl FUN_0063c490(void);
extern void __cdecl FUN_00696f20(void);
extern void __cdecl FUN_0066c4e0(void);
extern void __cdecl FUN_006256b0(void);
extern void __cdecl FUN_00679560(void);
extern void __cdecl FUN_0066ee40(void);
extern void __cdecl FUN_0069cd30(void);
extern void __cdecl FUN_00629440(void);
extern void __cdecl FUN_0069cb30(void);
extern void __cdecl FUN_00665e00(void);
extern void __cdecl FUN_0069c910(void);
extern void __cdecl FUN_00646d60(void);
extern void __cdecl FUN_0062c3e0(void);

__declspec(naked) void FUN_00626970(void)
{
    __asm {
        push    esi
        push    0x90
        mov     esi, ecx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_698d
        mov     ecx, eax
        call    FUN_00670e10
        jmp     L_698f
L_698d:
        xor     eax, eax
L_698f:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x160], eax
        call    FUN_006285a0
        push    0x320
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_69b7
        mov     ecx, eax
        call    FUN_00641200
        jmp     L_69b9
L_69b7:
        xor     eax, eax
L_69b9:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x108], eax
        call    FUN_006285a0
        push    0xa0
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_69e1
        mov     ecx, eax
        call    FUN_006428a0
        jmp     L_69e3
L_69e1:
        xor     eax, eax
L_69e3:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x10c], eax
        call    FUN_006285a0
        push    0x8c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6a0b
        mov     ecx, eax
        call    FUN_00643a30
        jmp     L_6a0d
L_6a0b:
        xor     eax, eax
L_6a0d:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x110], eax
        call    FUN_006285a0
        push    0x64
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6a32
        mov     ecx, eax
        call    FUN_00644de0
        jmp     L_6a34
L_6a32:
        xor     eax, eax
L_6a34:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x114], eax
        call    FUN_006285a0
        mov     ecx, dword ptr [esi + 0x114]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        push    0x78
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6a64
        mov     ecx, eax
        call    FUN_00644fd0
        jmp     L_6a66
L_6a64:
        xor     eax, eax
L_6a66:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x118], eax
        call    FUN_006285a0
        push    0x6c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6a8b
        mov     ecx, eax
        call    FUN_006458d0
        jmp     L_6a8d
L_6a8b:
        xor     eax, eax
L_6a8d:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x120], eax
        call    FUN_006285a0
        push    0x68
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6ab2
        mov     ecx, eax
        call    FUN_00645d70
        jmp     L_6ab4
L_6ab2:
        xor     eax, eax
L_6ab4:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x11c], eax
        call    FUN_006285a0
        push    0x74
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6ad9
        mov     ecx, eax
        call    FUN_00646260
        jmp     L_6adb
L_6ad9:
        xor     eax, eax
L_6adb:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x124], eax
        call    FUN_006285a0
        push    0x118
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6b03
        mov     ecx, eax
        call    FUN_0063d560
        jmp     L_6b05
L_6b03:
        xor     eax, eax
L_6b05:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x128], eax
        call    FUN_006285a0
        push    0x138
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6b2d
        mov     ecx, eax
        call    FUN_0063f010
        jmp     L_6b2f
L_6b2d:
        xor     eax, eax
L_6b2f:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x12c], eax
        call    FUN_006285a0
        push    0x184
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6b57
        mov     ecx, eax
        call    FUN_0063bff0
        jmp     L_6b59
L_6b57:
        xor     eax, eax
L_6b59:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x130], eax
        call    FUN_006285a0
        mov     ecx, dword ptr [esi + 0x4c]
        push    ecx
        mov     ecx, dword ptr [esi + 0x130]
        call    FUN_0063c490
        push    0x94
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6b90
        mov     ecx, eax
        call    FUN_00696f20
        jmp     L_6b92
L_6b90:
        xor     eax, eax
L_6b92:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x13c], eax
        call    FUN_006285a0
        push    0xc0
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6bba
        mov     ecx, eax
        call    FUN_0066c4e0
        jmp     L_6bbc
L_6bba:
        xor     eax, eax
L_6bbc:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x134], eax
        call    FUN_006285a0
        mov     eax, dword ptr [esi + 0x138]
        test    eax, eax
        jnz     L_6bf3
        push    0x74
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6beb
        mov     ecx, eax
        call    FUN_006256b0
        jmp     L_6bed
L_6beb:
        xor     eax, eax
L_6bed:
        mov     dword ptr [esi + 0x138], eax
L_6bf3:
        mov     edx, dword ptr [esi + 0x138]
        push    edx
        mov     ecx, esi
        call    FUN_006285a0
        push    0x64
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6c18
        mov     ecx, eax
        call    FUN_00679560
        jmp     L_6c1a
L_6c18:
        xor     eax, eax
L_6c1a:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x140], eax
        call    FUN_006285a0
        push    0x74
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6c3f
        mov     ecx, eax
        call    FUN_0066ee40
        jmp     L_6c41
L_6c3f:
        xor     eax, eax
L_6c41:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x144], eax
        call    FUN_006285a0
        push    0x5c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6c66
        mov     ecx, eax
        call    FUN_0069cd30
        jmp     L_6c68
L_6c66:
        xor     eax, eax
L_6c68:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x148], eax
        call    FUN_006285a0
        push    0x90
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6c90
        mov     ecx, eax
        call    FUN_00629440
        jmp     L_6c92
L_6c90:
        xor     eax, eax
L_6c92:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x14c], eax
        call    FUN_006285a0
        push    0x64
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6cb7
        mov     ecx, eax
        call    FUN_0069cb30
        jmp     L_6cb9
L_6cb7:
        xor     eax, eax
L_6cb9:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x150], eax
        call    FUN_006285a0
        push    0x74
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6cde
        mov     ecx, eax
        call    FUN_00665e00
        jmp     L_6ce0
L_6cde:
        xor     eax, eax
L_6ce0:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x154], eax
        call    FUN_006285a0
        push    0x54
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6d05
        mov     ecx, eax
        call    FUN_0069c910
        jmp     L_6d07
L_6d05:
        xor     eax, eax
L_6d07:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x158], eax
        call    FUN_006285a0
        push    0x6c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6d2c
        mov     ecx, eax
        call    FUN_00646d60
        jmp     L_6d2e
L_6d2c:
        xor     eax, eax
L_6d2e:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x104], eax
        call    FUN_006285a0
        push    0x74
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6d63
        mov     ecx, eax
        call    FUN_0062c3e0
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x15c], eax
        call    FUN_006285a0
        pop     esi
        ret     4
L_6d63:
        xor     eax, eax
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x15c], eax
        call    FUN_006285a0
        pop     esi
        ret     4
    }
}
