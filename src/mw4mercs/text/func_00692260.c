/*
 * FUN_00692260 (288 B) — __thiscall (ECX=this), RET 4. Compares a
 * string from this->[0x2c] against several flag-name constants
 * (0x7990c8 "flag_team0", 0x7990b4 "flag_team1", 0x79909c
 * "flag_team2", etc.) and calls FUN_00412780 / FUN_00411c40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005e2000(void *p);
extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00411c40(void *a, void *b);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00692260(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     esi, ecx
        push    edi
        call    FUN_005e2000
        mov     esi, dword ptr [esi + 0x2C]
        test    esi, esi
        mov     dword ptr [esp + 0x14], esi
        jz      L227E
        inc     byte ptr [esi - 1]
L227E:
        lea     ecx, [esp + 0x14]
        call    FUN_004128e0
        mov     ebp, dword ptr [esp + 0x14]
        mov     esi, 0x7990c8
        mov     eax, ebp
L2292:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L22BA
        test    cl, cl
        jz      L22B6
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L22BA
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L2292
L22B6:
        xor     eax, eax
        jmp     L22BF
L22BA:
        sbb     eax, eax
        sbb     eax, -1
L22BF:
        test    eax, eax
        jnz     L22CA
        push    0x7990c0
        jmp     L2346
L22CA:
        mov     esi, 0x7990b4
        mov     eax, ebp
L22D1:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L22F9
        test    cl, cl
        jz      L22F5
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L22F9
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L22D1
L22F5:
        xor     eax, eax
        jmp     L22FE
L22F9:
        sbb     eax, eax
        sbb     eax, -1
L22FE:
        test    eax, eax
        jnz     L2309
        push    0x7990a8
        jmp     L2346
L2309:
        mov     esi, 0x79909c
        mov     eax, ebp
L2310:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L2338
        test    cl, cl
        jz      L2334
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L2338
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L2310
L2334:
        xor     eax, eax
        jmp     L233D
L2338:
        sbb     eax, eax
        sbb     eax, -1
L233D:
        test    eax, eax
        jnz     L234F
        push    0x799090
L2346:
        lea     ecx, [esp + 0x18]
        call    FUN_00412780
L234F:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    0x799078
        mov     ecx, edi
        call    FUN_00411c40
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      L237D
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L237D
        push    eax
        call    FUN_004084e0
        pop     ecx
L237D:
        ret     4
    }
}
