/*
 * FUN_00402f90 (956 B) - Game-list filter initialization: reads options.ini
 * settings, builds a filter bitmask, and applies versioned object settings.
 * __stdcall, 3 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00700660(void);
extern void __cdecl FUN_00707100(void);
extern void __cdecl FUN_00512ff0(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_00703440(void);
extern void __cdecl FUN_006f8e40(void);
extern void __cdecl FUN_00402ec0(void);
extern void __cdecl FUN_00701f20(void);
extern void __cdecl FUN_00405f30(void);
extern void __cdecl FUN_006f9000(void);
extern void __cdecl FUN_006fcab0(void);
extern void __cdecl FUN_006f9050(void);

extern int  *g_76b318;   /* atoi IAT */

extern int  g_7b21c4;
extern char g_8493d4;
extern char g_7b796a;
extern int  g_7b7b6c;
extern int  g_7b7dc0;
extern int  g_7b7dd4;
extern int  g_8589b4;
extern int  g_7dab44;
extern int  g_7dab40;
extern int  g_7b7e40;

__declspec(naked) void FUN_00402f90(void)
{
    __asm {
        mov     eax, dword ptr [g_7b21c4]
        sub     esp, 0xb8
        test    eax, eax
        jz      L_402fb6
        mov     al, byte ptr [g_8493d4]
        test    al, al
        jnz     L_402fb6
        mov     al, byte ptr [g_7b796a]
        test    al, al
        jz      L_402fb6
        call    FUN_00700660
L_402fb6:
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_00707100
        mov     ebp, dword ptr [g_7b7b6c]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    0
        lea     eax, [esp + 0x1c]
        push    0
        and     ebp, 0xff
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x20], 0
        call    FUN_00512ff0
        test    eax, eax
        jz      L_402ff3
        or      ebp, 0x100
L_402ff3:
        lea     edx, [esp + 0x18]
        push    edx
        push    0
        push    0
        mov     dword ptr [esp + 0x20], 0x28
        call    FUN_00512ff0
        test    eax, eax
        jz      L_403013
        or      ebp, 0x200
L_403013:
        lea     eax, [esp + 0x18]
        push    eax
        push    0
        push    0
        mov     dword ptr [esp + 0x20], 1
        call    FUN_00512ff0
        test    eax, eax
        jz      L_403033
        or      ebp, 0x800
L_403033:
        push    1
        push    0
        xor     bl, bl
        push    0x77826c
        lea     ecx, [esp + 0x34]
        mov     byte ptr [esp + 0x1f], bl
        call    FUN_0040dca0
        push    0x778288
        lea     ecx, [esp + 0x2c]
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jz      L_4030bb
        push    0
        lea     ecx, [esp + 0x28]
        push    ecx
        push    0x76ba74
        mov     ecx, esi
        call    FUN_00411bf0
        test    al, al
        jz      L_4030bb
        mov     edx, dword ptr [esp + 0x24]
        mov     edi, dword ptr [g_76b318]
        push    edx
        call    edi
        add     esp, 4
        test    eax, eax
        setnz   bl
        test    bl, bl
        jz      L_4030bb
        push    0
        lea     eax, [esp + 0x24]
        push    eax
        push    0x76ba68
        mov     ecx, esi
        call    FUN_00411bf0
        test    al, al
        jz      L_4030b9
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        call    edi
        add     esp, 4
        test    eax, eax
        setnz   byte ptr [esp + 0x13]
        jmp     L_4030bb
L_4030b9:
        xor     bl, bl
L_4030bb:
        lea     ecx, [esp + 0x28]
        call    FUN_0040de20
        test    bl, bl
        jz      L_4030d2
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_4030e1
        jmp     L_4030db
L_4030d2:
        cmp     dword ptr [g_7b7b6c], 2
        jge     L_4030e1
L_4030db:
        or      ebp, 0x1000
L_4030e1:
        mov     eax, dword ptr [g_7b7dc0]
        mov     edx, dword ptr [g_7b7dd4]
        mov     ecx, dword ptr [esp + 0xd4]
        test    eax, eax
        push    ebp
        setnz   al
        push    edx
        mov     edx, dword ptr [g_8589b4]
        push    eax
        mov     eax, dword ptr [esp + 0xdc]
        push    ecx
        mov     ecx, dword ptr [esp + 0xdc]
        push    edx
        push    eax
        push    ecx
        call    FUN_00703440
        mov     esi, eax
        test    esi, esi
        jnz     L_403338
        call    FUN_006f8e40
        test    al, al
        jnz     L_40316e
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0xc]
        mov     esi, dword ptr [eax + 0xc]
        add     eax, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x754c
        xor     esi, 0x85739531
        call    dword ptr [edx + 0x34]
        push    eax
        mov     eax, dword ptr [esi]
        push    0x7546
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        push    eax
        call    FUN_00402ec0
        add     esp, 8
L_40316e:
        push    0
        push    0
        push    3
        call    FUN_00701f20
        test    eax, eax
        jz      L_403198
        push    0
        push    0
        push    3
        call    FUN_00701f20
        push    eax
        push    0x7b7e40
        call    FUN_00405f30
        add     esp, 8
        jmp     L_4031a1
L_403198:
        mov     ecx, dword ptr [g_7b7e40]
        mov     byte ptr [ecx], 0
L_4031a1:
        push    1
        push    0
        push    0x778278
        lea     ecx, [esp + 0x84]
        mov     dword ptr [esp + 0x28], 0x76ba64
        call    FUN_0040dca0
        push    0x778278
        lea     ecx, [esp + 0x7c]
        call    FUN_0040ecc0
        test    eax, eax
        jz      L_4031e3
        push    0
        lea     edx, [esp + 0x20]
        push    edx
        push    0x76ba58
        mov     ecx, eax
        call    FUN_00411bf0
L_4031e3:
        push    0
        push    0
        push    4
        call    FUN_00701f20
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    0x79fb70
        push    eax
        call    FUN_006f9000
        lea     edx, [esp + 0x18]
        push    edx
        push    0
        push    0
        mov     dword ptr [esp + 0x20], 0xe
        call    FUN_00512ff0
        mov     ebx, dword ptr [g_7dab40]
        test    eax, eax
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        jz      L_403239
        xor     ecx, ebx
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0xea60
        jmp     L_40324b
L_403239:
        xor     ecx, ebx
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0xea61
L_40324b:
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x79fb0c
        push    0
        call    FUN_006fcab0
        lea     eax, [esp + 0x18]
        push    eax
        push    0
        push    0
        mov     dword ptr [esp + 0x20], 6
        call    FUN_00512ff0
        test    eax, eax
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        mov     ebx, dword ptr [g_7dab40]
        jz      L_403297
        xor     edx, ebx
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0xea61
        jmp     L_4032a9
L_403297:
        xor     edx, ebx
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0xea60
L_4032a9:
        call    dword ptr [eax + 0x34]
        push    eax
        push    0x79fb1c
        push    0
        call    FUN_006fcab0
        lea     ecx, [esp + 0x18]
        push    ecx
        push    0
        push    0
        mov     dword ptr [esp + 0x20], 9
        call    FUN_00512ff0
        test    eax, eax
        jz      L_4032f3
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0xea60
        jmp     L_403310
L_4032f3:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0xea61
L_403310:
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x79fb24
        push    0
        call    FUN_006fcab0
        lea     ecx, [esp + 0x78]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0xb8
        ret     0xc
L_403338:
        call    FUN_006f9050
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xb8
        ret     0xc
    }
}
