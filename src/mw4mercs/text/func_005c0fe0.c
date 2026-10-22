/*
 * FUN_005c0fe0 (1118 B) — __thiscall (ECX = this) constructor, RET 0x10
 * (4 stack params). Initializes a large CombatAI object: calls base ctor
 * FUN_005cd950, zeroes/initializes many fields, sets up sub-objects via
 * FUN_005cb2xx / FUN_0065e3d0 / FUN_005b6830 / FUN_00580580 / FUN_005cb4xx,
 * installs vtable 0x787980, then conditionally copies data from a linked
 * object and runs a linked-list loop.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005cd950(void);
extern float __cdecl FUN_00707e70(int);
extern void __cdecl FUN_00682170(void);
extern void __cdecl FUN_005cb230(void);
extern void __cdecl FUN_0065e3d0(void);
extern void __cdecl FUN_005cb210(void);
extern void __cdecl FUN_005cb260(void);
extern void __cdecl FUN_005cb2c0(void);
extern void __cdecl FUN_005b6830(void);
extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_005cb420(void);
extern void __cdecl FUN_005c0e60(void);
extern void __cdecl FUN_005cb440(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_0065e590(void);
extern int __cdecl FUN_00637b40(int);
extern float __cdecl FUN_00637a20(void);
extern char __cdecl FUN_005c7f40(void);
extern void __cdecl FUN_005efd50(int);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __stdcall FUN_005c0fe0(void)
{
    

extern int DAT_007f2460;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x14
        mov     eax, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0xc]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [ebp + 0x8]
        mov     esi, ecx
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005cd950
        xor     ebx, ebx
        push    ebx
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x4dc]
        lea     ecx, [esi + 0x508]
        push    esi
        mov     dword ptr [esi + 0x4e0], ebx
        call    FUN_00682170
        lea     ecx, [esp + 0xf]
        push    ecx
        mov     edi, 0x2
        mov     dword ptr [esi + 0x550], ebx
        mov     dword ptr [esi + 0x558], ebx
        mov     dword ptr [esi + 0x598], ebx
        lea     ecx, [esi + 0x5a4]
        mov     dword ptr [esi + 0x514], edi
        mov     byte ptr [esi + 0x51c], bl
        mov     dword ptr [esi + 0x520], 0x42c80000
        mov     dword ptr [esi + 0x524], ebx
        mov     dword ptr [esi + 0x528], ebx
        mov     dword ptr [esi + 0x52c], ebx
        mov     dword ptr [esi + 0x530], ebx
        mov     dword ptr [esi + 0x540], ebx
        mov     byte ptr [esi + 0x544], bl
        mov     byte ptr [esi + 0x545], bl
        mov     byte ptr [esi + 0x546], 0x1
        mov     byte ptr [esi + 0x547], 0x1
        mov     byte ptr [esi + 0x548], bl
        mov     byte ptr [esi + 0x549], bl
        mov     byte ptr [esi + 0x54a], bl
        mov     dword ptr [esi + 0x54c], ebx
        mov     dword ptr [esi + 0x554], ebx
        mov     dword ptr [esi + 0x55c], ebx
        mov     dword ptr [esi + 0x560], ebx
        mov     dword ptr [esi + 0x564], ebx
        mov     dword ptr [esi + 0x568], ebx
        mov     dword ptr [esi + 0x56c], ebx
        mov     dword ptr [esi + 0x574], ebx
        mov     dword ptr [esi + 0x578], ebx
        mov     dword ptr [esi + 0x57c], ebx
        mov     dword ptr [esi + 0x584], ebx
        mov     dword ptr [esi + 0x594], ebx
        mov     dword ptr [esi + 0x59c], ebx
        mov     byte ptr [esi + 0x5a0], bl
        call    FUN_005cb230
        push    esi
        lea     ecx, [esi + 0x5b0]
        call    FUN_0065e3d0
        push    ebx
        mov     dword ptr [esi + 0x5b8], edi
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x5bc]
        lea     edx, [esp + 0xf]
        push    edx
        lea     ecx, [esi + 0x5c4]
        mov     dword ptr [esi + 0x5c0], ebx
        call    FUN_005cb210
        lea     eax, [esp + 0xf]
        push    eax
        lea     ecx, [esi + 0x5e8]
        mov     dword ptr [esi + 0x5d0], ebx
        mov     dword ptr [esi + 0x5d4], ebx
        mov     dword ptr [esi + 0x5d8], ebx
        mov     dword ptr [esi + 0x5dc], ebx
        mov     dword ptr [esi + 0x5e0], ebx
        mov     dword ptr [esi + 0x5e4], ebx
        call    FUN_005cb260
        lea     ecx, [esp + 0xf]
        push    ecx
        lea     ecx, [esi + 0x600]
        mov     dword ptr [esi + 0x5f4], ebx
        mov     dword ptr [esi + 0x5f8], 0xfffffffe
        mov     byte ptr [esi + 0x5fc], bl
        mov     byte ptr [esi + 0x5fd], 0x1
        mov     byte ptr [esi + 0x5fe], bl
        call    FUN_005cb2c0
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x13]
        push    eax
        lea     ecx, [esi + 0x60c]
        mov     dword ptr [esi + 0x604], ebx
        mov     dword ptr [esi + 0x608], ebx
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_005b6830
        push    ebx
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x610]
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x13]
        push    edx
        lea     ecx, [esi + 0x62c]
        mov     byte ptr [esi + 0x614], 0x1
        mov     dword ptr [esi + 0x618], ebx
        mov     dword ptr [esi + 0x61c], ebx
        mov     dword ptr [esi + 0x620], ebx
        mov     dword ptr [esi + 0x624], ebx
        mov     dword ptr [esi + 0x628], ebx
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_00580580
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x13]
        mov     dword ptr [esi + 0x640], 0x787b70
        push    ecx
        mov     dword ptr [esi + 0x630], ebx
        mov     dword ptr [esi + 0x644], 0x787b5c
        lea     ecx, [esi + 0x650]
        mov     dword ptr [esi + 0x634], ebx
        mov     dword ptr [esi + 0x638], ebx
        mov     dword ptr [esi + 0x63c], ebx
        mov     dword ptr [esi + 0x648], ebx
        mov     dword ptr [esi + 0x64c], ebx
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_005cb420
        push    0xc
        lea     ecx, [esi + 0x658]
        mov     dword ptr [esi + 0x654], ebx
        call    FUN_005c0e60
        push    0xc
        lea     ecx, [esi + 0x664]
        call    FUN_005c0e60
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x13]
        push    eax
        lea     ecx, [esi + 0x690]
        mov     dword ptr [esi + 0x688], ebx
        mov     dword ptr [esi + 0x68c], ebx
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_005cb440
        mov ecx, dword ptr [DAT_007f2460]
        mov     dword ptr [esi + 0x694], ebx
        push    ecx
        mov     dword ptr [esi + 0x698], ebx
        mov     dword ptr [esi + 0x69c], ebx
        mov     byte ptr [esi + 0x6a0], bl
        mov     byte ptr [esi + 0x6a1], bl
        mov     dword ptr [esi], 0x787980
        call    FUN_006f4950
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        cmp     byte ptr [ecx + 0x17fc], bl
        jz      L_done
        mov     edi, dword ptr [esi + 0x170]
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x60]
        mov     dword ptr [esi + 0x570], eax
        mov     eax, dword ptr [edi + 0xd8]
        mov     ecx, dword ptr [eax + 0x9c]
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0xac]
        fstp    dword ptr [esi + 0x4e4]
        add     eax, 0x80
        mov     eax, ecx
        mov     dword ptr [esi + 0x4e8], eax
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, edx
        mov     dword ptr [esi + 0x4ec], ecx
        mov     dword ptr [esi + 0x4f8], ebx
        mov     dword ptr [esi + 0x4f4], ebx
        mov     dword ptr [esi + 0x4f0], ebx
        mov     eax, 0xfffffffe
        mov     dword ptr [esi + 0x53c], ebx
        mov     dword ptr [esi + 0x538], ebx
        mov     dword ptr [esi + 0x534], ebx
        mov     dword ptr [esi + 0x590], ebx
        mov     dword ptr [esi + 0x58c], ebx
        mov     dword ptr [esi + 0x588], ebx
        mov     dword ptr [esi + 0x678], ebx
        mov     dword ptr [esi + 0x688], ebx
        push    ebx
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esi + 0x504], ebx
        mov     dword ptr [esi + 0x500], ebx
        mov     dword ptr [esi + 0x4fc], ebx
        mov     dword ptr [esi + 0x670], eax
        mov     dword ptr [esi + 0x67c], ebx
        mov     dword ptr [esi + 0x674], eax
        mov     dword ptr [esi + 0x68c], ebx
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x550]
        push    ebx
        fstp    qword ptr [esi + 0x558]
        call    FUN_00707e70
        lea     eax, [esi + 0x508]
        fstp    qword ptr [esi + 0x550]
        push    eax
        call    FUN_0065e590
        add     esp, 0x4
        call    FUN_00637b40
        test    eax, eax
        jz      L_after
        push    0x5d
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fstp    dword ptr [esi + 0x584]
L_after:
        mov     ecx, esi
        call    FUN_005c7f40
        cmp     al, 0x1
        jnz     L_done
        mov     eax, dword ptr [esi + 0x170]
        mov     edi, dword ptr [eax + 0x3f8]
        add     eax, 0x3f8
L_loop:
        cmp     edi, ebx
        jz      L_done
        mov     ecx, dword ptr [edi]
        cmp     ecx, ebx
        mov     edi, dword ptr [edi + 0x4]
        jz      L_done
        push    0x1
        call    FUN_005efd50
        jmp     L_loop
L_done:
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }


}
