/* FUN_0051C540 - 0x0051C540, size 3379 B (block 0x51AA7D, first fn)
 * __stdcall, RET 0xC. Large string-building/logging dispatcher: reads global
 * state, builds formatted strings via the C++ string helpers
 * (FUN_00412570/4125e0/412740/40d9b0), iterates an object list (0x40c0e0),
 * dispatches on [..+0x50] count via an in-function jump table at 0x51CF38,
 * and issues many vtable calls. Jump table data emitted as literal bytes.
 *
 * Genuine __emit (all justified):
 *   - jmp dword ptr [ebp*4 + 0x51cf38] (FF 24 AD ...): MSVC6 re-bases via EBX.
 *   - jump-table data (5 relocated dword pointers): inline asm has no `dd`.
 */
#include <windows.h>

/* extern data symbols (absolute addresses) */
extern int    g_7dab44;   /* 0x007dab44 */
extern int    g_7dab40;   /* 0x007dab40 */
extern char   g_76b768[]; /* 0x0076b768 */
extern int*   g_76b420;   /* 0x0076b420 (IAT fn ptr) */
extern char   g_77a080[]; /* 0x0077a080 */
extern char   g_77a07c[]; /* 0x0077a07c */
extern char   g_77a078[]; /* 0x0077a078 */
extern char   g_77a074[]; /* 0x0077a074 */
extern char   g_76ba64[]; /* 0x0076ba64 */
extern char   g_76cb8c[]; /* 0x0076cb8c */
extern char   g_76b9a8[]; /* 0x0076b9a8 */
extern char   g_76c690[]; /* 0x0076c690 */

/* extern function symbols (rel32 calls) */
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00592a70(void);
extern void __cdecl FUN_00593ca0(void);
extern void __cdecl FUN_00593e20(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_0072dd70(void);
extern void __cdecl FUN_00593b20(void);
extern void __cdecl FUN_00593ba0(void);
extern void __cdecl FUN_00593be0(void);
extern void __cdecl FUN_00593c20(void);
extern void __cdecl FUN_00593ae0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00595b60(void);

__declspec(naked) void func_0051C540(void)
{
    __asm {
        sub esp, 0xf8
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov edx, dword ptr [ecx + 0x44]
        lea eax, [ecx + 0x44]
        push edi
        xor edi, edi
        xor edx, 0x85739531
        mov dword ptr [esp + 0xc], edi
        mov dword ptr [esp + 0x14], edi
        je L_cf29
        mov eax, dword ptr [eax]
        xor eax, 0x85739531
        cmp dword ptr [eax + 0x34], edi
        je L_cf29
        mov eax, dword ptr [esp + 0x108]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        push ebp
        push esi
        mov esi, dword ptr [eax + 4]
        push 0x76b768
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x70], edx
        mov dword ptr [esp + 0x1c], esi
        call FUN_00412570
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov edx, dword ptr [ecx + 0x44]
        xor edx, 0x85739531
        mov eax, dword ptr [edx + 0x34]
        add eax, 0x10
        mov dword ptr [esp + 0xb8], eax
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0xb4]
        mov dword ptr [esp + 0xbc], eax
        mov dword ptr [esp + 0xb4], 0x77a080
        call FUN_0040c0e0
        mov ebp, eax
        cmp ebp, edi
        mov dword ptr [esp + 0x10], ebp
        je L_ce82
        push ebx
        mov ebx, dword ptr [g_76b420]
        jmp L_c604
L_c600:
        mov ebp, dword ptr [esp + 0x14]
L_c604:
        mov eax, dword ptr [ebp + 0x18]
        mov edi, 1
        cmp eax, edi
        jne L_ce69
        mov ecx, dword ptr [esp + 0x70]
        cmp dword ptr [ebp + 0x3c], ecx
        jne L_ce69
        push edi
        lea edx, [ebp + 0x34]
        push edx
        lea ecx, [esp + 0xcc]
        call FUN_004d1f80
        push 0x9c
        call FUN_004084d0
        add esp, 4
        test eax, eax
        je L_c656
        lea ecx, [esp + 0xc4]
        push ecx
        mov ecx, eax
        call FUN_00592a70
        mov esi, eax
        jmp L_c658
L_c656:
        xor esi, esi
L_c658:
        mov ebp, dword ptr [ebp + 0x50]
        mov ecx, esi
        mov dword ptr [esi + 0x40], ebp
        call FUN_00593ca0
        mov ecx, esi
        mov ebp, eax
        call FUN_00593e20
        mov dword ptr [esp + 0x3c], eax
        mov eax, dword ptr [esp + 0x20]
        test eax, eax
        je L_c6a8
        mov edx, dword ptr [esp + 0x10]
        push 0x77a07c
        push edx
        lea ecx, [esp + 0xac]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0xa4]
        call FUN_0040d9b0
        jmp L_c6ac
L_c6a8:
        mov dword ptr [esp + 0x20], edi
L_c6ac:
        test ebp, ebp
        jge L_cb04
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0xea64
        call dword ptr [edx + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea ecx, [esp + 0xb8]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0xb0]
        call FUN_0040d9b0
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov edi, dword ptr [edx + 0xc]
        xor edi, 0x85739531
        mov ebp, dword ptr [edi]
        mov ecx, esi
        call FUN_00593b20
        push eax
        mov ecx, edi
        call dword ptr [ebp + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea ecx, [esp + 0x48]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x40]
        call FUN_0040d9b0
        mov ecx, dword ptr [esp + 0x10]
        push 0x77a078
        push ecx
        lea ecx, [esp + 0x88]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x80]
        call FUN_0040d9b0
        mov edx, dword ptr [g_7dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0xea65
        call dword ptr [edx + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea ecx, [esp + 0x50]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x48]
        call FUN_0040d9b0
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov edi, dword ptr [edx + 0xc]
        xor edi, 0x85739531
        mov ebp, dword ptr [edi]
        mov ecx, esi
        call FUN_00593ba0
        push eax
        mov ecx, edi
        call dword ptr [ebp + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea ecx, [esp + 0xa8]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0xa0]
        call FUN_0040d9b0
        mov ecx, dword ptr [esp + 0x10]
        push 0x77a078
        push ecx
        lea ecx, [esp + 0x58]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x50]
        call FUN_0040d9b0
        mov edx, dword ptr [g_7dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0xea66
        call dword ptr [edx + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea ecx, [esp + 0x90]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x88]
        call FUN_0040d9b0
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [ecx + 0x50]
        cmp eax, 0xa
        jge L_c885
        mov eax, dword ptr [ecx + eax*4 + 0xb8]
        jmp L_c88b
L_c885:
        mov eax, dword ptr [ecx + 0xb4]
L_c88b:
        push eax
        lea ecx, [esp + 0x28]
        push 0x76b9a8
        push ecx
        call ebx
        lea edx, [esp + 0x30]
        push edx
        call FUN_0072dd70
        push eax
        lea eax, [esp + 0x38]
        push 0x76c690
        push eax
        call ebx
        mov edx, dword ptr [esp + 0x2c]
        add esp, 0x1c
        lea ecx, [esp + 0x24]
        push ecx
        push edx
        lea ecx, [esp + 0x60]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x58]
        call FUN_0040d9b0
        mov eax, dword ptr [esp + 0x10]
        push 0x77a078
        push eax
        lea ecx, [esp + 0xbc]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0xb4]
        call FUN_0040d9b0
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx]
        push 0xea67
        call dword ptr [eax + 0x34]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        lea ecx, [esp + 0x68]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x60]
        call FUN_0040d9b0
        mov edx, dword ptr [g_7dab44]
        mov edi, dword ptr [g_7dab40]
        mov eax, dword ptr [edx]
        xor eax, edi
        mov edi, dword ptr [eax + 0xc]
        xor edi, 0x85739531
        mov ebp, dword ptr [edi]
        mov ecx, esi
        call FUN_00593ae0
        push eax
        mov ecx, edi
        call dword ptr [ebp + 0x34]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        lea ecx, [esp + 0x98]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x90]
        call FUN_0040d9b0
        mov edx, dword ptr [esp + 0x10]
        push 0x77a078
        push edx
        lea ecx, [esp + 0x70]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x68]
        call FUN_0040d9b0
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0xea68
        call dword ptr [edx + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea ecx, [esp + 0xb0]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0xa8]
        call FUN_0040d9b0
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov edi, dword ptr [edx + 0xc]
        xor edi, 0x85739531
        mov ebp, dword ptr [edi]
        mov ecx, esi
        call FUN_00593be0
        push eax
        mov ecx, edi
        call dword ptr [ebp + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea ecx, [esp + 0x40]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x38]
        call FUN_0040d9b0
        mov ecx, dword ptr [esp + 0x10]
        push 0x77a078
        push ecx
        lea ecx, [esp + 0xa0]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x98]
        call FUN_0040d9b0
        mov ecx, esi
        call FUN_00593c20
        push eax
        lea edx, [esp + 0x28]
        push 0x76b9a8
        push edx
        call ebx
        mov ecx, dword ptr [esp + 0x1c]
        add esp, 0xc
        lea eax, [esp + 0x24]
        push eax
        push ecx
        lea ecx, [esp + 0x80]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x78]
        call FUN_0040d9b0
        mov edx, dword ptr [g_7dab44]
        mov ecx, dword ptr [g_7dab40]
        mov eax, dword ptr [edx]
        xor eax, ecx
        mov ecx, dword ptr [eax + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0xea69
        call dword ptr [edx + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea ecx, [esp + 0xb4]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0xac]
        jmp L_ce3f
L_cb04:
        xor edi, edi
        mov ecx, ebp
        xor eax, eax
        sub ecx, edi
        je L_cb22
        dec ecx
        je L_cb1b
        dec ecx
        jne L_cb27
        mov eax, 0xea74
        jmp L_cb27
L_cb1b:
        mov eax, 0xea73
        jmp L_cb27
L_cb22:
        mov eax, 0xea72
L_cb27:
        mov ebp, dword ptr [esp + 0x3c]
        cmp ebp, 4
        ja L_cb58
        __emit 0xFF   /* jmp dword ptr [ebp*4 + 0x51cf38] (MSVC6 re-bases via EBX) */
        __emit 0x24
        __emit 0xAD
        __emit 0x38
        __emit 0xCF
        __emit 0x51
        __emit 0x00
        mov edi, 0xea71
        jmp L_cb58
        mov edi, 0xea6d
        jmp L_cb58
        mov edi, 0xea6e
        jmp L_cb58
        mov edi, 0xea6f
        jmp L_cb58
        mov edi, 0xea70
L_cb58:
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea ecx, [esp + 0x4c]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x44]
        call FUN_0040d9b0
        mov ecx, dword ptr [esp + 0x10]
        push 0x76cb8c
        push ecx
        lea ecx, [esp + 0x54]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x4c]
        call FUN_0040d9b0
        mov edx, dword ptr [g_7dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push edi
        call dword ptr [edx + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea ecx, [esp + 0x5c]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x54]
        call FUN_0040d9b0
        mov ecx, dword ptr [esp + 0x10]
        push 0x77a078
        push ecx
        lea ecx, [esp + 0x64]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x5c]
        call FUN_0040d9b0
        cmp ebp, 4
        je L_cc90
        mov edx, dword ptr [g_7dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0xea6a
        call dword ptr [edx + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea ecx, [esp + 0x6c]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x64]
        call FUN_0040d9b0
        mov ecx, dword ptr [esp + 0x10]
        push 0x77a078
        push ecx
        lea ecx, [esp + 0x74]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x6c]
        call FUN_0040d9b0
L_cc90:
        mov edx, dword ptr [g_7dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0xea6b
        call dword ptr [edx + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea ecx, [esp + 0x7c]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x74]
        call FUN_0040d9b0
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [ecx + 0x50]
        cmp eax, 0xa
        jge L_ccea
        mov edx, ecx
        mov eax, dword ptr [edx + eax*4 + 0xb8]
        jmp L_ccf4
L_ccea:
        mov eax, dword ptr [esp + 0x14]
        mov eax, dword ptr [eax + 0xb4]
L_ccf4:
        push eax
        lea ecx, [esp + 0x28]
        push 0x76b9a8
        push ecx
        call ebx
        lea edx, [esp + 0x30]
        push edx
        call FUN_0072dd70
        push eax
        lea eax, [esp + 0x38]
        push 0x77a074
        push eax
        call ebx
        mov edx, dword ptr [esp + 0x2c]
        add esp, 0x1c
        lea ecx, [esp + 0x24]
        push ecx
        push edx
        lea ecx, [esp + 0x84]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x7c]
        call FUN_0040d9b0
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0xea6c
        call dword ptr [edx + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea ecx, [esp + 0x8c]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x84]
        call FUN_0040d9b0
        mov ecx, dword ptr [esp + 0x10]
        push 0x77a078
        push ecx
        lea ecx, [esp + 0x94]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x8c]
        call FUN_0040d9b0
        mov ecx, esi
        call FUN_00593c20
        push eax
        lea edx, [esp + 0x28]
        push 0x76b9a8
        push edx
        call ebx
        mov ecx, dword ptr [esp + 0x1c]
        add esp, 0xc
        lea eax, [esp + 0x24]
        push eax
        push ecx
        lea ecx, [esp + 0x9c]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x94]
        call FUN_0040d9b0
        mov edx, dword ptr [g_7dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax + 0xc]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0xea69
        call dword ptr [edx + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push eax
        lea ecx, [esp + 0xa4]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x9c]
L_ce3f:
        call FUN_0040d9b0
        mov ecx, dword ptr [esp + 0x18]
        inc ecx
        test esi, esi
        mov dword ptr [esp + 0x18], ecx
        je L_ce59
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        call dword ptr [edx]
L_ce59:
        lea ecx, [esp + 0xc4]
        call FUN_004d21c0
        mov esi, dword ptr [esp + 0x1c]
L_ce69:
        lea ecx, [esp + 0xb8]
        call FUN_0040c0e0
        test eax, eax
        mov dword ptr [esp + 0x14], eax
        jne L_c600
        pop ebx
L_ce82:
        mov eax, dword ptr [esp + 0xc]
        push 0x76ba64
        push eax
        lea ecx, [esp + 0x20]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x10]
        call FUN_00412740
        lea ecx, [esp + 0x18]
        call FUN_0040d9b0
        mov eax, dword ptr [esi]
        test eax, eax
        je L_ceba
        push eax
        call FUN_006f4230
        mov dword ptr [esi], 0
L_ceba:
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        jne L_cec6
        xor ecx, ecx
        jmp L_ced0
L_cec6:
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
L_ced0:
        push 0
        inc ecx
        push ecx
        call FUN_006f3c80
        or ecx, 0xffffffff
        mov edx, eax
        mov dword ptr [esi], edx
        mov edi, dword ptr [esp + 0xc]
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        mov edi, edx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        pop esi
        pop ebp
        je L_cf1b
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne L_cf1b
        push eax
        call FUN_004084e0
        add esp, 4
L_cf1b:
        mov eax, dword ptr [esp + 0xc]
        pop edi
        add esp, 0xf8
        ret 0xc
L_cf29:
        xor eax, eax
        pop edi
        add esp, 0xf8
        ret 0xc
        __emit 0x8D   /* alignment pad lea ecx,[ecx] (8D 49 00) */
        __emit 0x49
        __emit 0x00

        /* jump-table data @ 0x0051CF38 (5 relocated pointers) */
        __emit 0x3E   /* 0x0051CB3E */
        __emit 0xCB
        __emit 0x51
        __emit 0x00
        __emit 0x45   /* 0x0051CB45 */
        __emit 0xCB
        __emit 0x51
        __emit 0x00
        __emit 0x4C   /* 0x0051CB4C */
        __emit 0xCB
        __emit 0x51
        __emit 0x00
        __emit 0x53   /* 0x0051CB53 */
        __emit 0xCB
        __emit 0x51
        __emit 0x00
        __emit 0x37   /* 0x0051CB37 */
        __emit 0xCB
        __emit 0x51
        __emit 0x00
    }
}
