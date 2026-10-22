/*
 * FUN_004C1240 (270 B) — MLR subsystem static initializer / constructor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007da9e8;
extern int DAT_007daaec;
extern int DAT_007dab18;
extern int DAT_007daaf0;
extern int DAT_007b37f8;
extern char DAT_007daae8;
extern char DAT_007daae9;
extern char DAT_007daaea;

extern void FUN_006f4710(void);
extern void *FUN_004084d0(void);
extern void FUN_004151c0(void *this);
extern void FUN_0070f090(void);
extern void *FUN_0040ecc0(void);
extern void FUN_00411cb0(void *this);

__declspec(naked) void FUN_004c1240(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007da9e8]
        push    ebx
        push    esi
        push    eax
        xor     ebx, ebx
        push    ebx
        push    0x7715b4
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [DAT_007daaec], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      l_skip_alloc

        mov     ecx, dword ptr [DAT_007dab18]
        push    ecx
        push    0x771594
        push    0x83
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x4c1840
        mov     dword ptr [DAT_007daaf0], esi
        jmp     l_after_alloc

    l_skip_alloc:
        mov     dword ptr [DAT_007daaf0], ebx

    l_after_alloc:
        push    ebx
        push    ebx
        push    0x4c1370
        push    0x4c1350
        push    0x771568
        mov     dword ptr [DAT_007b37f8], 0x8
        mov     byte ptr [DAT_007daae8], bl
        mov     byte ptr [DAT_007daae9], bl
        mov     byte ptr [DAT_007daaea], bl
        call    FUN_0070f090
        push    ebx
        push    ebx
        push    0x4c1390
        push    0x4c1360
        push    0x77153c
        call    FUN_0070f090
        push    ebx
        push    0x4c13b0
        push    0x4c13d0
        push    0x4c13c0
        push    0x771508
        call    FUN_0070f090
        push    ebx
        push    ebx
        push    0x4c13f0
        push    0x4c13e0
        push    0x7714e0
        call    FUN_0070f090

        mov     ecx, dword ptr [esp + 0xc]
        cmp     ecx, ebx
        jz      l_done

        push    0x76d9ec
        call    FUN_0040ecc0
        cmp     eax, ebx
        jz      l_done

        push    ebx
        push    0x7b37f8
        push    0x7714d4
        mov     ecx, eax
        call    FUN_00411cb0
        mov     ecx, dword ptr [DAT_007b37f8]
        mov     eax, 0x2
        cmp     ecx, eax
        jge     l_done
        mov     dword ptr [DAT_007b37f8], eax

    l_done:
        pop     esi
        pop     ebx
        ret
    }
}
